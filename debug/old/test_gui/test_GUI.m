function varargout = test_GUI(varargin)
% TEST_GUI MATLAB code for test_GUI.fig
%      TEST_GUI, by itself, creates a new TEST_GUI or raises the existing
%      singleton*.
%
%      H = TEST_GUI returns the handle to a new TEST_GUI or the handle to
%      the existing singleton*.
%
%      TEST_GUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in TEST_GUI.M with the given input arguments.
%
%      TEST_GUI('Property','Value',...) creates a new TEST_GUI or raises
%      the existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before test_GUI_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to test_GUI_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help test_GUI

% Last Modified by GUIDE v2.5 09-Apr-2015 15:21:58

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @test_GUI_OpeningFcn, ...
                   'gui_OutputFcn',  @test_GUI_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT

% --- Executes just before test_GUI is made visible.
function test_GUI_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to test_GUI (see VARARGIN)

% Choose default command line output for test_GUI
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);
%persistent s

initialize_gui(hObject, handles, false);
% portCOM = 'COM63'
% delete(instrfind) 
% s = serial(portCOM)
% set(s,'BaudRate',9600)
% fopen(s)
% disp('Connection')
% pause(5)
% while s.BytesAvailable>0
%     data = fscanf(s)
% end

% UIWAIT makes test_GUI wait for user response (see UIRESUME)
% uiwait(handles.figure1);
global s
%s = fopen('exp.txt','w');


% --- Outputs from this function are returned to the command line.
function varargout = test_GUI_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;




function density_Callback(hObject, eventdata, handles)
% hObject    handle to density (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of density as text
%        str2double(get(hObject,'String')) returns contents of density as a double
density = str2double(get(hObject, 'String'));
if isnan(density)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

% Save the new density value
handles.metricdata.density = density;
guidata(hObject,handles)

% --- Executes during object creation, after setting all properties.
function volume_CreateFcn(hObject, eventdata, handles)
% hObject    handle to volume (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function volume_Callback(hObject, eventdata, handles)
% hObject    handle to volume (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of volume as text
%        str2double(get(hObject,'String')) returns contents of volume as a double
volume = str2double(get(hObject, 'String'));
if isnan(volume)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

% Save the new volume value
handles.metricdata.volume = volume;
guidata(hObject,handles)

% --- Executes on button press in calculate.
function calculate_Callback(hObject, eventdata, handles)
% hObject    handle to calculate (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

mass = handles.metricdata.density * handles.metricdata.volume;
set(handles.mass, 'String', mass);

% --- Executes on button press in reset.
function reset_Callback(hObject, eventdata, handles)
% hObject    handle to reset (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S2\n')

%initialize_gui(gcbf, handles, true);


% --------------------------------------------------------------------
function initialize_gui(fig_handle, handles, isreset)
% If the metricdata field is present and the reset flag is false, it means
% we are we are just re-initializing a GUI by calling it from the cmd line
% while it is up. So, bail out as we dont want to reset the data.
if isfield(handles, 'metricdata') && ~isreset
    return;
end


%handles.metricdata.density = 0;
%handles.metricdata.volume  = 0;

%set(handles.density, 'String', handles.metricdata.density);
%set(handles.volume,  'String', handles.metricdata.volume);
%set(handles.mass, 'String', 0);

%set(handles.unitgroup, 'SelectedObject', handles.english);

%set(handles.text4, 'String', 'lb/cu.in');
%set(handles.text5, 'String', 'cu.in');
%set(handles.text6, 'String', 'lb');
disp('coucou')

% Update handles structure
guidata(handles.figure1, handles);



function edit_KI_CAP_Callback(hObject, eventdata, handles)
% hObject    handle to edit_KI_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
KI_CAP = get(handles.edit_KI_CAP,'String')
setappdata(0,'KI_CAP',KI_CAP) 

% Hints: get(hObject,'String') returns contents of edit_KI_CAP as text
%        str2double(get(hObject,'String')) returns contents of edit_KI_CAP as a double


% --- Executes during object creation, after setting all properties.
function edit_KI_CAP_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_KI_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_KD_CAP_Callback(hObject, eventdata, handles)
% hObject    handle to edit_KD_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
KD_CAP = get(handles.edit_KD_CAP,'String')
setappdata(0,'KD_CAP',KD_CAP) 

% Hints: get(hObject,'String') returns contents of edit_KD_CAP as text
%        str2double(get(hObject,'String')) returns contents of edit_KD_CAP as a double


% --- Executes during object creation, after setting all properties.
function edit_KD_CAP_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_KD_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton11.
function pushbutton11_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
KP_CAP = get(handles.edit_KP_CAP,'String')
KD_CAP = get(handles.edit_KD_CAP,'String')
KI_CAP = get(handles.edit_KI_CAP,'String')
setappdata(0,'KP_CAP',KP_CAP) 
setappdata(0,'KD_CAP',KD_CAP)
setappdata(0,'KI_CAP',KI_CAP)
KP_CAP = getappdata(0,'KP_CAP') 
KD_CAP = getappdata(0,'KD_CAP')
KI_CAP = getappdata(0,'KI_CAP')
espace = 32
message = strcat('S8 0 ',espace,KP_CAP,espace,KD_CAP,espace,KI_CAP,'\n')
fprintf(handles.fileID,message)
% while s.BytesAvailable>0
%     data = fscanf(s)
% end



% --- Executes on button press in pushbutton10.
function pushbutton10_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton10 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)



function edit_KP_CAP_Callback(hObject, eventdata, handles)
% hObject    handle to edit_KP_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
KP_CAP = get(handles.edit_KP_CAP,'String')
setappdata(0,'KP_CAP',KP_CAP) 
% Hints: get(hObject,'String') returns contents of edit_KP_CAP as text
%        str2double(get(hObject,'String')) returns contents of edit_KP_CAP as a double


% --- Executes during object creation, after setting all properties.
function edit_KP_CAP_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_KP_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit11_Callback(hObject, eventdata, handles)
% hObject    handle to edit11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit11 as text
%        str2double(get(hObject,'String')) returns contents of edit11 as a double


% --- Executes during object creation, after setting all properties.
function edit11_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit12_Callback(hObject, eventdata, handles)
% hObject    handle to edit12 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit12 as text
%        str2double(get(hObject,'String')) returns contents of edit12 as a double


% --- Executes during object creation, after setting all properties.
function edit12_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit12 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit13_Callback(hObject, eventdata, handles)
% hObject    handle to edit13 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit13 as text
%        str2double(get(hObject,'String')) returns contents of edit13 as a double


% --- Executes during object creation, after setting all properties.
function edit13_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit13 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton19.
function pushbutton19_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton19 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'P3\n')


% --- Executes on button press in pushbutton18.
function pushbutton18_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton18 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'P2\n')


% --- Executes on button press in pushbutton15.
function pushbutton15_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton15 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'P0\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      pause(0.1)
end


% --- Executes on button press in pushbutton14.
function pushbutton14_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton14 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'P1\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      pause(0.1)
end


% --- Executes on button press in pushbutton25.
function pushbutton25_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton25 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'C1\n')


% --- Executes on button press in pushbutton24.
function pushbutton24_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton24 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'C0\n')


% --- Executes on button press in pushbutton22.
function pushbutton22_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton22 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'C2\n')


% --- Executes on button press in pushbutton23.
function pushbutton23_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton23 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'C3\n')


% --- Executes on button press in pushbutton47.
function pushbutton47_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton47 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'D0\n')

% --- Executes on button press in pushbutton48.
function pushbutton48_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton48 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'D4\n')


% --- Executes on button press in pushbutton49.
function pushbutton49_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton49 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'D2\n')

% --- Executes on button press in pushbutton50.
function pushbutton50_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton50 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'D1\n')

% --- Executes on button press in pushbutton51.
function pushbutton51_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton51 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'D5\n')

% --- Executes on button press in pushbutton52.
function pushbutton52_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton52 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'D6\n')

% --- Executes on button press in pushbutton46.
function pushbutton46_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton46 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'G6\n')


% --- Executes on button press in pushbutton45.
function pushbutton45_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton45 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'G5\n')


% --- Executes on button press in pushbutton44.
function pushbutton44_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton44 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'G1\n')


% --- Executes on button press in pushbutton43.
function pushbutton43_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton43 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'G2\n')


% --- Executes on button press in pushbutton32.
function pushbutton32_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton32 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'G4\n')


% --- Executes on button press in pushbutton31.
function pushbutton31_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton31 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'G0\n')


% --- Executes on button press in Connection.
function Connection_Callback(hObject, eventdata, handles)
% hObject    handle to Connection (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
%global s



portCOM = get(handles.edit_portCOM,'String')
setappdata(0,'portCOM',portCOM) 
portCOM = getappdata(0,'portCOM') 
delete(instrfind) 
% s = serial(portCOM)
% set(s,'BaudRate',9600)
% fopen(s)
% disp('Connection')

%fileName = 'exp.txt';
%fileID  = fopen(fileName,'w')
fileID = serial(portCOM)
set(fileID,'BaudRate',9600)
handles.fileID = fileID;
fopen(fileID)

pause(3)
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end
guidata(hObject, handles);




function edit_portCOM_Callback(hObject, eventdata, handles)
% hObject    handle to edit_portCOM (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
portCOM = get(handles.edit_portCOM,'String')
setappdata(0,'portCOM',portCOM) 

% Hints: get(hObject,'String') returns contents of edit_portCOM as text
%        str2double(get(hObject,'String')) returns contents of edit_portCOM as a double


% --- Executes during object creation, after setting all properties.
function edit_portCOM_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_portCOM (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton42.
function pushbutton42_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton42 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'B2\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton41.
function pushbutton41_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton41 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'B3\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton39.
function pushbutton39_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton39 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'B1\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton40.
function pushbutton40_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton40 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'B0\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton53.
function pushbutton53_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton53 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton54.
function pushbutton54_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton54 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton55.
function pushbutton55_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton55 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton56.
function pushbutton56_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton56 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)



function edit20_Callback(hObject, eventdata, handles)
% hObject    handle to edit20 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit20 as text
%        str2double(get(hObject,'String')) returns contents of edit20 as a double


% --- Executes during object creation, after setting all properties.
function edit20_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit20 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit21_Callback(hObject, eventdata, handles)
% hObject    handle to edit21 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit21 as text
%        str2double(get(hObject,'String')) returns contents of edit21 as a double


% --- Executes during object creation, after setting all properties.
function edit21_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit21 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit22_Callback(hObject, eventdata, handles)
% hObject    handle to edit22 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit22 as text
%        str2double(get(hObject,'String')) returns contents of edit22 as a double


% --- Executes during object creation, after setting all properties.
function edit22_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit22 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton57.
function pushbutton57_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton57 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton59.
function pushbutton59_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton59 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'E1\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end

% --- Executes on button press in pushbutton58.
function pushbutton58_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton58 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'E0\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end

% --- Executes on button press in pushbutton62.
function pushbutton62_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton62 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'E2\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton64.
function pushbutton64_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton64 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'I1\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton63.
function pushbutton63_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton63 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'I0\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton66.
function pushbutton66_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton66 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S1\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end

% --- Executes on button press in pushbutton67.
function pushbutton67_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton67 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton70.
function pushbutton70_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton70 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S6 2\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end

% --- Executes on button press in pushbutton71.
function pushbutton71_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton71 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S6 1\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end

% --- Executes on button press in pushbutton73.
function pushbutton73_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton73 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S6 0\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton74.
function pushbutton74_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton74 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S7 2\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton75.
function pushbutton75_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton75 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S7 1\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton76.
function pushbutton76_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton76 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S7 0\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end



function edit_KP_DEP_Callback(hObject, eventdata, handles)
% hObject    handle to edit_KP_DEP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
KP_DEP = get(handles.edit_KP_DEP,'String')
setappdata(0,'KP_DEP',KP_DEP) 

% Hints: get(hObject,'String') returns contents of edit_KP_DEP as text
%        str2double(get(hObject,'String')) returns contents of edit_KP_DEP as a double


% --- Executes during object creation, after setting all properties.
function edit_KP_DEP_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_KP_DEP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_KD_DEP_Callback(hObject, eventdata, handles)
% hObject    handle to edit_KD_DEP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
KD_DEP = get(handles.edit_KD_DEP,'String')
setappdata(0,'KD_DEP',KD_DEP) 

% Hints: get(hObject,'String') returns contents of edit_KD_DEP as text
%        str2double(get(hObject,'String')) returns contents of edit_KD_DEP as a double


% --- Executes during object creation, after setting all properties.
function edit_KD_DEP_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_KD_DEP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_KI_DEP_Callback(hObject, eventdata, handles)
% hObject    handle to edit_KI_DEP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
KI_DEP = get(handles.edit_KI_DEP,'String')
setappdata(0,'KI_DEP',KI_DEP) 

% Hints: get(hObject,'String') returns contents of edit_KI_DEP as text
%        str2double(get(hObject,'String')) returns contents of edit_KI_DEP as a double


% --- Executes during object creation, after setting all properties.
function edit_KI_DEP_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_KI_DEP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton80.
function pushbutton80_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton80 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
KP_DEP = get(handles.edit_KP_DEP,'String')
KD_DEP = get(handles.edit_KD_DEP,'String')
KI_DEP = get(handles.edit_KI_DEP,'String')
setappdata(0,'KP_DEP',KP_DEP) 
setappdata(0,'KD_DEP',KD_DEP)
setappdata(0,'KI_DEP',KI_DEP)
KP_DEP = getappdata(0,'KP_DEP') 
KD_DEP = getappdata(0,'KD_DEP')
KI_DEP = getappdata(0,'KI_DEP')
espace = 32
message = strcat('S8 1 ',espace,KP_DEP,espace,KD_DEP,espace,KI_DEP,'\n')
fprintf(handles.fileID,message)
% while s.BytesAvailable>0
%     data = fscanf(s)
% end
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end



function edit_SETXYCAP_X_Callback(hObject, eventdata, handles)
% hObject    handle to edit_SETXYCAP_X (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
SETXYCAP_X = get(handles.edit_SETXYCAP_X,'String')
setappdata(0,'SETXYCAP_X',SETXYCAP_X) 

% Hints: get(hObject,'String') returns contents of edit_SETXYCAP_X as text
%        str2double(get(hObject,'String')) returns contents of edit_SETXYCAP_X as a double


% --- Executes during object creation, after setting all properties.
function edit_SETXYCAP_X_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_SETXYCAP_X (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_SETXYCAP_Y_Callback(hObject, eventdata, handles)
% hObject    handle to edit_SETXYCAP_Y (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
SETXYCAP_Y = get(handles.edit_SETXYCAP_Y,'String')
setappdata(0,'SETXYCAP_Y',SETXYCAP_Y) 

% Hints: get(hObject,'String') returns contents of edit_SETXYCAP_Y as text
%        str2double(get(hObject,'String')) returns contents of edit_SETXYCAP_Y as a double


% --- Executes during object creation, after setting all properties.
function edit_SETXYCAP_Y_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_SETXYCAP_Y (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_SETXYCAP_CAP_Callback(hObject, eventdata, handles)
% hObject    handle to edit_SETXYCAP_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
SETXYCAP_CAP = get(handles.edit_SETXYCAP_CAP,'String')
setappdata(0,'SETXYCAP_CAP',SETXYCAP_CAP) 

% Hints: get(hObject,'String') returns contents of edit_SETXYCAP_CAP as text
%        str2double(get(hObject,'String')) returns contents of edit_SETXYCAP_CAP as a double


% --- Executes during object creation, after setting all properties.
function edit_SETXYCAP_CAP_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_SETXYCAP_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton81.
function pushbutton81_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton81 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
SETXYCAP_X = get(handles.edit_SETXYCAP_X,'String')
SETXYCAP_Y = get(handles.edit_SETXYCAP_Y,'String')
SETXYCAP_CAP = get(handles.edit_SETXYCAP_CAP,'String')
setappdata(0,'SETXYCAP_X',SETXYCAP_X) 
setappdata(0,'SETXYCAP_Y',SETXYCAP_Y)
setappdata(0,'SETXYCAP_CAP',SETXYCAP_CAP)
SETXYCAP_X = getappdata(0,'SETXYCAP_X') 
SETXYCAP_Y = getappdata(0,'SETXYCAP_Y')
SETXYCAP_CAP = getappdata(0,'SETXYCAP_CAP')
espace = 32
message = strcat('S0 ',espace,SETXYCAP_X,espace,SETXYCAP_Y,espace,SETXYCAP_CAP,'\n')
fprintf(handles.fileID,message)
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end



% --- Executes on button press in pushbutton82.
function pushbutton82_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton82 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S1\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end



function edit31_Callback(hObject, eventdata, handles)
% hObject    handle to edit31 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit31 as text
%        str2double(get(hObject,'String')) returns contents of edit31 as a double


% --- Executes during object creation, after setting all properties.
function edit31_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit31 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit30_Callback(hObject, eventdata, handles)
% hObject    handle to edit30 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit30 as text
%        str2double(get(hObject,'String')) returns contents of edit30 as a double


% --- Executes during object creation, after setting all properties.
function edit30_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit30 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit29_Callback(hObject, eventdata, handles)
% hObject    handle to edit29 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit29 as text
%        str2double(get(hObject,'String')) returns contents of edit29 as a double


% --- Executes during object creation, after setting all properties.
function edit29_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit29 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_BFDROITE_X_Callback(hObject, eventdata, handles)
% hObject    handle to edit_BFDROITE_X (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
BFDROITE_X = get(handles.edit_BFDROITE_X,'String')
setappdata(0,'BFDROITE_X',BFDROITE_X) 

% Hints: get(hObject,'String') returns contents of edit_BFDROITE_X as text
%        str2double(get(hObject,'String')) returns contents of edit_BFDROITE_X as a double


% --- Executes during object creation, after setting all properties.
function edit_BFDROITE_X_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_BFDROITE_X (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_BFDROITE_Y_Callback(hObject, eventdata, handles)
% hObject    handle to edit_BFDROITE_Y (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
BFDROITE_Y = get(handles.edit_BFDROITE_Y,'String')
setappdata(0,'BFDROITE_Y',BFDROITE_Y) 

% Hints: get(hObject,'String') returns contents of edit_BFDROITE_Y as text
%        str2double(get(hObject,'String')) returns contents of edit_BFDROITE_Y as a double


% --- Executes during object creation, after setting all properties.
function edit_BFDROITE_Y_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_BFDROITE_Y (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_BFDROITE_CAP_Callback(hObject, eventdata, handles)
% hObject    handle to edit_BFDROITE_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
BFDROITE_CAP = get(handles.edit_BFDROITE_CAP,'String')
setappdata(0,'BFDROITE_CAP',BFDROITE_CAP)

% Hints: get(hObject,'String') returns contents of edit_BFDROITE_CAP as text
%        str2double(get(hObject,'String')) returns contents of edit_BFDROITE_CAP as a double


% --- Executes during object creation, after setting all properties.
function edit_BFDROITE_CAP_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_BFDROITE_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton86.
function pushbutton86_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton86 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
BFDROITE_X = get(handles.edit_BFDROITE_X,'String')
setappdata(0,'BFDROITE_X',BFDROITE_X) 
BFDROITE_Y = get(handles.edit_BFDROITE_Y,'String')
setappdata(0,'BFDROITE_Y',BFDROITE_Y) 
BFDROITE_CAP = get(handles.edit_BFDROITE_CAP,'String')
setappdata(0,'BFDROITE_CAP',BFDROITE_CAP) 

BFDROITE_X = getappdata(0,'BFDROITE_X')
BFDROITE_Y = getappdata(0,'BFDROITE_Y')
BFDROITE_CAP = getappdata(0,'BFDROITE_CAP')
espace = 32
message = strcat('S5 ',espace,BFDROITE_X,espace,BFDROITE_Y,espace,BFDROITE_CAP)
fprintf(handles.fileID,message)
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton85.
function pushbutton85_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton85 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
fprintf(handles.fileID,'S2\n')
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end



function edit_BFAVANCE_D_Callback(hObject, eventdata, handles)
% hObject    handle to edit_BFAVANCE_D (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
BFAVANCE_D = get(handles.edit_BFAVANCE_D,'String')
setappdata(0,'BFAVANCE_D',BFAVANCE_D) 

% Hints: get(hObject,'String') returns contents of edit_BFAVANCE_D as text
%        str2double(get(hObject,'String')) returns contents of edit_BFAVANCE_D as a double


% --- Executes during object creation, after setting all properties.
function edit_BFAVANCE_D_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_BFAVANCE_D (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton84.
function pushbutton84_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton84 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
BFAVANCE_D = get(handles.edit_BFAVANCE_D,'String')
setappdata(0,'BFAVANCE_D',BFAVANCE_D) 
BFAVANCE_D = getappdata(0,'BFAVANCE_D')
espace = 32
message = strcat('S4 ',espace,BFAVANCE_D)
fprintf(handles.fileID,message)
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


% --- Executes on button press in pushbutton83.
function pushbutton83_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton83 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
BFCAP_CAP = get(handles.edit_BFCAP_CAP,'String')
setappdata(0,'BFCAP_CAP',BFCAP_CAP) 
BFCAP_CAP = getappdata(0,'BFCAP_CAP')
espace = 32
message = strcat('S3 ',espace,BFCAP_CAP)
fprintf(handles.fileID,message)
while handles.fileID.BytesAvailable>0
      data = fscanf(handles.fileID)
      %pause(0.01)
end


function edit_BFCAP_CAP_Callback(hObject, eventdata, handles)
% hObject    handle to edit_BFCAP_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
BFCAP_CAP = get(handles.edit_BFCAP_CAP,'String')
setappdata(0,'BFCAP_CAP',BFCAP_CAP) 

% Hints: get(hObject,'String') returns contents of edit_BFCAP_CAP as text
%        str2double(get(hObject,'String')) returns contents of edit_BFCAP_CAP as a double


% --- Executes during object creation, after setting all properties.
function edit_BFCAP_CAP_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_BFCAP_CAP (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton99.
function pushbutton99_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton99 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

fclose(handles.fileID)
