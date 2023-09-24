#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State  UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State::Waiting{0};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State  UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State::TrackingAddOrMove{1};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State  UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State::TrackingRemove{2};
//  Writing Method size for method: UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.OnHierarchyChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::HierarchyChangeType)>(&UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnHierarchyChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.OnVersionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::VersionChangeType)>(&UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c419ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)()>(&UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::Update)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c41b7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.ProcessNewChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessNewChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c419d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            "ProcessNewChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.ProcessAddOrMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessAddOrMove)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c41ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            "ProcessAddOrMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater.ProcessRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)(UnityEngine::UIElements::VisualElement)>(&UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessRemove)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c41a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            "ProcessRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::*)()>(&UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c41c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__set_m_State(UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__get_m_State() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__BaseVisualTreeHierarchyTrackerUpdater__State, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__set_m_CurrentChangeElement(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__get_m_CurrentChangeElement() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__set_m_CurrentChangeParent(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::__get_m_CurrentChangeParent() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnHierarchyChange(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::HierarchyChangeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            "OnHierarchyChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::HierarchyChangeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, type);
}
 void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            "OnVersionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VersionChangeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, versionChangeType);
}
 void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessNewChange(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            "ProcessNewChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessAddOrMove(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            "ProcessAddOrMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::ProcessRemove(UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            "ProcessRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::New_ctor()  {
UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>())};
return o;
}
 void UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
