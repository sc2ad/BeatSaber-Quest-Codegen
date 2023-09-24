#pragma once
#include "GlobalNamespace/zzzz__NoteControllerBase_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidPassJumpThreeQuartersEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent
constexpr  GlobalNamespace::MirroredNoteController_1<T>::operator GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent() const noexcept {
return GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent
constexpr  GlobalNamespace::MirroredNoteController_1<T>::operator GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent() const noexcept {
return GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set__noteTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::MirroredNoteController_1<T>::__get__noteTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set_followedNote(T value)  {
::cordl_internals::setInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::MirroredNoteController_1<T>::__get_followedNote() const {
return ::cordl_internals::getInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set__followedNoteTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::MirroredNoteController_1<T>::__get__followedNoteTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set__didInitEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent> GlobalNamespace::MirroredNoteController_1<T>::__get__didInitEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set__noteDidPassJumpThreeQuartersEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> GlobalNamespace::MirroredNoteController_1<T>::__get__noteDidPassJumpThreeQuartersEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__set__noteDidStartDissolvingEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> GlobalNamespace::MirroredNoteController_1<T>::__get__noteDidStartDissolvingEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent> GlobalNamespace::MirroredNoteController_1<T>::get_didInitEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "get_didInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> GlobalNamespace::MirroredNoteController_1<T>::get_noteDidPassJumpThreeQuartersEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "get_noteDidPassJumpThreeQuartersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> GlobalNamespace::MirroredNoteController_1<T>::get_noteDidStartDissolvingEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "get_noteDidStartDissolvingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteData GlobalNamespace::MirroredNoteController_1<T>::get_noteData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "get_noteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteData, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MirroredNoteController_1<T>::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MirroredNoteController_1<T>::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MirroredNoteController_1<T>::UpdatePositionAndRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "UpdatePositionAndRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MirroredNoteController_1<T>::Mirror(T noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "Mirror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::MirroredNoteController_1<T>::RemoveListeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "RemoveListeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MirroredNoteController_1<T>::HandleNoteControllerNoteDidStartDissolving(GlobalNamespace::NoteControllerBase noteController, float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "HandleNoteControllerNoteDidStartDissolving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteControllerBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, duration);
}
 void GlobalNamespace::MirroredNoteController_1<T>::HandleNoteControllerNoteDidPassJumpThreeQuarters(GlobalNamespace::NoteControllerBase noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "HandleNoteControllerNoteDidPassJumpThreeQuarters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteControllerBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::MirroredNoteController_1<T>::Hide(bool hide)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            "Hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hide);
}
 GlobalNamespace::MirroredNoteController_1<T> GlobalNamespace::MirroredNoteController_1<T>::New_ctor()  {
GlobalNamespace::MirroredNoteController_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MirroredNoteController_1<T>>())};
return o;
}
 void GlobalNamespace::MirroredNoteController_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MirroredNoteController_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
