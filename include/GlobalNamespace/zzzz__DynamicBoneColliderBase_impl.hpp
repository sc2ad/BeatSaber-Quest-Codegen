#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction::GlobalNamespace__DynamicBoneColliderBase__Direction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction  GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction::X{0};
constexpr GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction  GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction::Y{1};
constexpr GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction  GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction::Z{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound::GlobalNamespace__DynamicBoneColliderBase__Bound(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound  GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound::Outside{0};
constexpr GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound  GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound::Inside{1};
//  Writing Method size for method: GlobalNamespace::DynamicBoneColliderBase.Collide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBoneColliderBase::*)(ByRef<UnityEngine::Vector3>, float_t)>(&GlobalNamespace::DynamicBoneColliderBase::Collide)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11a6654;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::DynamicBoneColliderBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DynamicBoneColliderBase>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DynamicBoneColliderBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBoneColliderBase::*)()>(&GlobalNamespace::DynamicBoneColliderBase::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x11a65f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DynamicBoneColliderBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DynamicBoneColliderBase::__set_m_Direction(GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction>(value));
}
constexpr GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction GlobalNamespace::DynamicBoneColliderBase::__get_m_Direction() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Direction, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DynamicBoneColliderBase::__set_m_Center(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::DynamicBoneColliderBase::__get_m_Center() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DynamicBoneColliderBase::__set_m_Bound(GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound>(value));
}
constexpr GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound GlobalNamespace::DynamicBoneColliderBase::__get_m_Bound() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__DynamicBoneColliderBase__Bound, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::DynamicBoneColliderBase::Collide(ByRef<UnityEngine::Vector3> particlePosition, float_t particleRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DynamicBoneColliderBase>::get(),
                            "Collide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, particlePosition, particleRadius);
}
// Ctor Parameters []
 GlobalNamespace::DynamicBoneColliderBase::DynamicBoneColliderBase()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DynamicBoneColliderBase>())) {}
 void GlobalNamespace::DynamicBoneColliderBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DynamicBoneColliderBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
