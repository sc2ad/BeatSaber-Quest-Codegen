// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: HMUI.ToggleWithCallbacks
#include "HMUI/ToggleWithCallbacks.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine/UI/Selectable_SelectionState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.ToggleWithCallbacks.add_stateDidChangeEvent
void HMUI::ToggleWithCallbacks::add_stateDidChangeEvent(System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_stateDidChangeEvent", value));
}
// Autogenerated method: HMUI.ToggleWithCallbacks.remove_stateDidChangeEvent
void HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent(System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_stateDidChangeEvent", value));
}
// Autogenerated method: HMUI.ToggleWithCallbacks.get_selectionState
HMUI::ToggleWithCallbacks::SelectionState HMUI::ToggleWithCallbacks::get_selectionState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::ToggleWithCallbacks::SelectionState>(this, "get_selectionState"));
}
// Autogenerated method: HMUI.ToggleWithCallbacks.DoStateTransition
void HMUI::ToggleWithCallbacks::DoStateTransition(UnityEngine::UI::Selectable::SelectionState state, bool instant) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoStateTransition", state, instant));
}
// Autogenerated method: HMUI.ToggleWithCallbacks..ctor
HMUI::ToggleWithCallbacks* HMUI::ToggleWithCallbacks::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ToggleWithCallbacks*>());
}