#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteBigCuttableColliderSize_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::NoteBigCuttableColliderSize.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&GlobalNamespace::NoteBigCuttableColliderSize::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x223e418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteBigCuttableColliderSize>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteBigCuttableColliderSize.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x223e4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteBigCuttableColliderSize>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteBigCuttableColliderSize.HandleNoteControllerDidInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteBigCuttableColliderSize::*)(GlobalNamespace::NoteControllerBase)>(&GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x223e5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteBigCuttableColliderSize>::get(),
                            "HandleNoteControllerDidInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteControllerBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteBigCuttableColliderSize._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&GlobalNamespace::NoteBigCuttableColliderSize::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223e660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteBigCuttableColliderSize>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::INoteControllerDidInitEvent
constexpr  GlobalNamespace::NoteBigCuttableColliderSize::operator GlobalNamespace::INoteControllerDidInitEvent() const noexcept {
return GlobalNamespace::INoteControllerDidInitEvent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__set__noteController(GlobalNamespace::NoteController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteController>(value));
}
constexpr GlobalNamespace::NoteController GlobalNamespace::NoteBigCuttableColliderSize::__get__noteController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__set__boxCollider(UnityEngine::BoxCollider value)  {
::cordl_internals::setInstanceField<UnityEngine::BoxCollider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::BoxCollider>(value));
}
constexpr UnityEngine::BoxCollider GlobalNamespace::NoteBigCuttableColliderSize::__get__boxCollider() const {
return ::cordl_internals::getInstanceField<UnityEngine::BoxCollider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__set__defaultColliderSize(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::NoteBigCuttableColliderSize::__get__defaultColliderSize() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::NoteBigCuttableColliderSize::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteBigCuttableColliderSize>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteBigCuttableColliderSize>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteBigCuttableColliderSize>::get(),
                            "HandleNoteControllerDidInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteControllerBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
// Ctor Parameters []
 GlobalNamespace::NoteBigCuttableColliderSize::NoteBigCuttableColliderSize()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<NoteBigCuttableColliderSize>())) {}
 void GlobalNamespace::NoteBigCuttableColliderSize::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteBigCuttableColliderSize>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
