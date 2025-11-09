import os

def rename_files(folder_path, video_name):
    """
    Rename files from 'frame_XXXXX.jpg/json' to 'videoname_XXXXX.jpg/json'
    
    Parameters:
    folder_path (str): Path to the folder containing the files
    video_name (str): New prefix for the files
    """
    # List all files in the directory
    files = os.listdir(folder_path)
    
    # Filter files that start with 'frame_' and end with either .jpg or .json
    frame_files = [f for f in files if f.startswith('frame_') and (f.endswith('.jpg') or f.endswith('.json'))]
    
    # Sort files to ensure sequential processing
    frame_files.sort()
    
    # Rename each file
    for file in frame_files:
        # Get the number part from the original filename
        number_part = file.replace('frame_', '')
        
        # Create new filename
        new_name = f"{video_name}_{number_part}"
        
        # Full paths for old and new names
        old_path = os.path.join(folder_path, file)
        new_path = os.path.join(folder_path, new_name)
        
        # Rename the file
        try:
            os.rename(old_path, new_path)
            print(f"Renamed: {file} -> {new_name}")
        except Exception as e:
            print(f"Error renaming {file}: {str(e)}")

# Example usage
folder_path = r"C:/Users/karti/Downloads/16mm_yellow_flapper/Labelled_Video_3"
video_name = "Video_3"

rename_files(folder_path, video_name)