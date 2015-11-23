#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.InputField
struct InputField_t208;
// UnityEngine.Mesh
struct Mesh_t177;
// UnityEngine.TextGenerator
struct TextGenerator_t212;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t153;
// UnityEngine.UI.Graphic
struct Graphic_t170;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t199;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t201;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t203;
// System.Collections.IEnumerator
struct IEnumerator_t40;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t28;
// UnityEngine.Event
struct Event_t214;
struct Event_t214_marshaled;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t79;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t178;
// UnityEngine.UI.InputField/ContentType[]
struct ContentTypeU5BU5D_t327;
// UnityEngine.Transform
struct Transform_t34;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"

// System.Void UnityEngine.UI.InputField::.ctor()
extern "C" void InputField__ctor_m938 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::.cctor()
extern "C" void InputField__cctor_m939 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.UI.InputField::get_mesh()
extern "C" Mesh_t177 * InputField_get_mesh_m940 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.InputField::get_cachedInputTextGenerator()
extern "C" TextGenerator_t212 * InputField_get_cachedInputTextGenerator_m941 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_shouldHideMobileInput(System.Boolean)
extern "C" void InputField_set_shouldHideMobileInput_m942 (InputField_t208 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_shouldHideMobileInput()
extern "C" bool InputField_get_shouldHideMobileInput_m943 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
extern "C" String_t* InputField_get_text_m944 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C" void InputField_set_text_m945 (InputField_t208 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
extern "C" bool InputField_get_isFocused_m946 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::get_caretBlinkRate()
extern "C" float InputField_get_caretBlinkRate_m947 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretBlinkRate(System.Single)
extern "C" void InputField_set_caretBlinkRate_m948 (InputField_t208 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
extern "C" Text_t153 * InputField_get_textComponent_m949 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_textComponent(UnityEngine.UI.Text)
extern "C" void InputField_set_textComponent_m950 (InputField_t208 * __this, Text_t153 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
extern "C" Graphic_t170 * InputField_get_placeholder_m951 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_placeholder(UnityEngine.UI.Graphic)
extern "C" void InputField_set_placeholder_m952 (InputField_t208 * __this, Graphic_t170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.InputField::get_selectionColor()
extern "C" Color_t134  InputField_get_selectionColor_m953 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
extern "C" void InputField_set_selectionColor_m954 (InputField_t208 * __this, Color_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
extern "C" SubmitEvent_t199 * InputField_get_onEndEdit_m955 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onEndEdit(UnityEngine.UI.InputField/SubmitEvent)
extern "C" void InputField_set_onEndEdit_m956 (InputField_t208 * __this, SubmitEvent_t199 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChange()
extern "C" OnChangeEvent_t201 * InputField_get_onValueChange_m957 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValueChange(UnityEngine.UI.InputField/OnChangeEvent)
extern "C" void InputField_set_onValueChange_m958 (InputField_t208 * __this, OnChangeEvent_t201 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
extern "C" OnValidateInput_t203 * InputField_get_onValidateInput_m959 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
extern "C" void InputField_set_onValidateInput_m960 (InputField_t208 * __this, OnValidateInput_t203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
extern "C" int32_t InputField_get_characterLimit_m961 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
extern "C" void InputField_set_characterLimit_m962 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
extern "C" int32_t InputField_get_contentType_m963 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
extern "C" void InputField_set_contentType_m964 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
extern "C" int32_t InputField_get_lineType_m965 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
extern "C" void InputField_set_lineType_m966 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::get_inputType()
extern "C" int32_t InputField_get_inputType_m967 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
extern "C" void InputField_set_inputType_m968 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::get_keyboardType()
extern "C" int32_t InputField_get_keyboardType_m969 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
extern "C" void InputField_set_keyboardType_m970 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::get_characterValidation()
extern "C" int32_t InputField_get_characterValidation_m971 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
extern "C" void InputField_set_characterValidation_m972 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
extern "C" bool InputField_get_multiLine_m973 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::get_asteriskChar()
extern "C" uint16_t InputField_get_asteriskChar_m974 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_asteriskChar(System.Char)
extern "C" void InputField_set_asteriskChar_m975 (InputField_t208 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_wasCanceled()
extern "C" bool InputField_get_wasCanceled_m976 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ClampPos(System.Int32&)
extern "C" void InputField_ClampPos_m977 (InputField_t208 * __this, int32_t* ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPositionInternal()
extern "C" int32_t InputField_get_caretPositionInternal_m978 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPositionInternal(System.Int32)
extern "C" void InputField_set_caretPositionInternal_m979 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretSelectPositionInternal()
extern "C" int32_t InputField_get_caretSelectPositionInternal_m980 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretSelectPositionInternal(System.Int32)
extern "C" void InputField_set_caretSelectPositionInternal_m981 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
extern "C" bool InputField_get_hasSelection_m982 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
extern "C" int32_t InputField_get_caretPosition_m983 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
extern "C" void InputField_set_caretPosition_m984 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_selectionAnchorPosition()
extern "C" int32_t InputField_get_selectionAnchorPosition_m985 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionAnchorPosition(System.Int32)
extern "C" void InputField_set_selectionAnchorPosition_m986 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_selectionFocusPosition()
extern "C" int32_t InputField_get_selectionFocusPosition_m987 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionFocusPosition(System.Int32)
extern "C" void InputField_set_selectionFocusPosition_m988 (InputField_t208 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEnable()
extern "C" void InputField_OnEnable_m989 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDisable()
extern "C" void InputField_OnDisable_m990 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::CaretBlink()
extern "C" Object_t * InputField_CaretBlink_m991 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretVisible()
extern "C" void InputField_SetCaretVisible_m992 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretActive()
extern "C" void InputField_SetCaretActive_m993 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFocus()
extern "C" void InputField_OnFocus_m994 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SelectAll()
extern "C" void InputField_SelectAll_m995 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextEnd(System.Boolean)
extern "C" void InputField_MoveTextEnd_m996 (InputField_t208 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextStart(System.Boolean)
extern "C" void InputField_MoveTextStart_m997 (InputField_t208 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_clipboard()
extern "C" String_t* InputField_get_clipboard_m998 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_clipboard(System.String)
extern "C" void InputField_set_clipboard_m999 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::InPlaceEditing()
extern "C" bool InputField_InPlaceEditing_m1000 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LateUpdate()
extern "C" void InputField_LateUpdate_m1001 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.InputField::ScreenToLocal(UnityEngine.Vector2)
extern "C" Vector2_t23  InputField_ScreenToLocal_m1002 (InputField_t208 * __this, Vector2_t23  ___screen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2,UnityEngine.TextGenerator)
extern "C" int32_t InputField_GetUnclampedCharacterLineFromPosition_m1003 (InputField_t208 * __this, Vector2_t23  ___pos, TextGenerator_t212 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetCharacterIndexFromPosition(UnityEngine.Vector2)
extern "C" int32_t InputField_GetCharacterIndexFromPosition_m1004 (InputField_t208 * __this, Vector2_t23  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool InputField_MayDrag_m1005 (InputField_t208 * __this, PointerEventData_t28 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnBeginDrag_m1006 (InputField_t208 * __this, PointerEventData_t28 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnDrag_m1007 (InputField_t208 * __this, PointerEventData_t28 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData)
extern "C" Object_t * InputField_MouseDragOutsideRect_m1008 (InputField_t208 * __this, PointerEventData_t28 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnEndDrag_m1009 (InputField_t208 * __this, PointerEventData_t28 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnPointerDown_m1010 (InputField_t208 * __this, PointerEventData_t28 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/EditState UnityEngine.UI.InputField::KeyPressed(UnityEngine.Event)
extern "C" int32_t InputField_KeyPressed_m1011 (InputField_t208 * __this, Event_t214 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsValidChar(System.Char)
extern "C" bool InputField_IsValidChar_m1012 (InputField_t208 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ProcessEvent(UnityEngine.Event)
extern "C" void InputField_ProcessEvent_m1013 (InputField_t208 * __this, Event_t214 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnUpdateSelected_m1014 (InputField_t208 * __this, BaseEventData_t79 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::GetSelectedString()
extern "C" String_t* InputField_GetSelectedString_m1015 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtNextWordBegin()
extern "C" int32_t InputField_FindtNextWordBegin_m1016 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
extern "C" void InputField_MoveRight_m1017 (InputField_t208 * __this, bool ___shift, bool ___ctrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtPrevWordBegin()
extern "C" int32_t InputField_FindtPrevWordBegin_m1018 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
extern "C" void InputField_MoveLeft_m1019 (InputField_t208 * __this, bool ___shift, bool ___ctrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::DetermineCharacterLine(System.Int32,UnityEngine.TextGenerator)
extern "C" int32_t InputField_DetermineCharacterLine_m1020 (InputField_t208 * __this, int32_t ___charPos, TextGenerator_t212 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineUpCharacterPosition(System.Int32,System.Boolean)
extern "C" int32_t InputField_LineUpCharacterPosition_m1021 (InputField_t208 * __this, int32_t ___originalPos, bool ___goToFirstChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineDownCharacterPosition(System.Int32,System.Boolean)
extern "C" int32_t InputField_LineDownCharacterPosition_m1022 (InputField_t208 * __this, int32_t ___originalPos, bool ___goToLastChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean)
extern "C" void InputField_MoveDown_m1023 (InputField_t208 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
extern "C" void InputField_MoveDown_m1024 (InputField_t208 * __this, bool ___shift, bool ___goToLastChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean)
extern "C" void InputField_MoveUp_m1025 (InputField_t208 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
extern "C" void InputField_MoveUp_m1026 (InputField_t208 * __this, bool ___shift, bool ___goToFirstChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Delete()
extern "C" void InputField_Delete_m1027 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ForwardSpace()
extern "C" void InputField_ForwardSpace_m1028 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Backspace()
extern "C" void InputField_Backspace_m1029 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Insert(System.Char)
extern "C" void InputField_Insert_m1030 (InputField_t208 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChangedAndUpdateLabel()
extern "C" void InputField_SendOnValueChangedAndUpdateLabel_m1031 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChanged()
extern "C" void InputField_SendOnValueChanged_m1032 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnSubmit()
extern "C" void InputField_SendOnSubmit_m1033 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.String)
extern "C" void InputField_Append_m1034 (InputField_t208 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.Char)
extern "C" void InputField_Append_m1035 (InputField_t208 * __this, uint16_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateLabel()
extern "C" void InputField_UpdateLabel_m1036 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsSelectionVisible()
extern "C" bool InputField_IsSelectionVisible_m1037 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineStartPosition(UnityEngine.TextGenerator,System.Int32)
extern "C" int32_t InputField_GetLineStartPosition_m1038 (Object_t * __this /* static, unused */, TextGenerator_t212 * ___gen, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineEndPosition(UnityEngine.TextGenerator,System.Int32)
extern "C" int32_t InputField_GetLineEndPosition_m1039 (Object_t * __this /* static, unused */, TextGenerator_t212 * ___gen, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetDrawRangeToContainCaretPosition(System.Int32)
extern "C" void InputField_SetDrawRangeToContainCaretPosition_m1040 (InputField_t208 * __this, int32_t ___caretPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
extern "C" void InputField_MarkGeometryAsDirty_m1041 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void InputField_Rebuild_m1042 (InputField_t208 * __this, int32_t ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LayoutComplete()
extern "C" void InputField_LayoutComplete_m1043 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GraphicUpdateComplete()
extern "C" void InputField_GraphicUpdateComplete_m1044 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateGeometry()
extern "C" void InputField_UpdateGeometry_m1045 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::AssignPositioningIfNeeded()
extern "C" void InputField_AssignPositioningIfNeeded_m1046 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFillVBO(UnityEngine.Mesh)
extern "C" void InputField_OnFillVBO_m1047 (InputField_t208 * __this, Mesh_t177 * ___vbo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateCursor(UnityEngine.UI.VertexHelper,UnityEngine.Vector2)
extern "C" void InputField_GenerateCursor_m1048 (InputField_t208 * __this, VertexHelper_t178 * ___vbo, Vector2_t23  ___roundingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::CreateCursorVerts()
extern "C" void InputField_CreateCursorVerts_m1049 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::SumLineHeights(System.Int32,UnityEngine.TextGenerator)
extern "C" float InputField_SumLineHeights_m1050 (InputField_t208 * __this, int32_t ___endLine, TextGenerator_t212 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateHightlight(UnityEngine.UI.VertexHelper,UnityEngine.Vector2)
extern "C" void InputField_GenerateHightlight_m1051 (InputField_t208 * __this, VertexHelper_t178 * ___vbo, Vector2_t23  ___roundingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::Validate(System.String,System.Int32,System.Char)
extern "C" uint16_t InputField_Validate_m1052 (InputField_t208 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
extern "C" void InputField_ActivateInputField_m1053 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputFieldInternal()
extern "C" void InputField_ActivateInputFieldInternal_m1054 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnSelect_m1055 (InputField_t208 * __this, BaseEventData_t79 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnPointerClick_m1056 (InputField_t208 * __this, PointerEventData_t28 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
extern "C" void InputField_DeactivateInputField_m1057 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnDeselect_m1058 (InputField_t208 * __this, BaseEventData_t79 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnSubmit_m1059 (InputField_t208 * __this, BaseEventData_t79 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::EnforceContentType()
extern "C" void InputField_EnforceContentType_m1060 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField/ContentType[])
extern "C" void InputField_SetToCustomIfContentTypeIsNot_m1061 (InputField_t208 * __this, ContentTypeU5BU5D_t327* ___allowedContentTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustom()
extern "C" void InputField_SetToCustom_m1062 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
extern "C" void InputField_DoStateTransition_m1063 (InputField_t208 * __this, int32_t ___state, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool InputField_UnityEngine_UI_ICanvasElement_IsDestroyed_m1064 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t34 * InputField_UnityEngine_UI_ICanvasElement_get_transform_m1065 (InputField_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
