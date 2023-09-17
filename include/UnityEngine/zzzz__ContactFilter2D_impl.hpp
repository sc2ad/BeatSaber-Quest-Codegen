#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ContactFilter2D_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.CheckConsistency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContactFilter2D::*)()>(&::UnityEngine::ContactFilter2D::CheckConsistency)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b9b078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "CheckConsistency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.SetLayerMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContactFilter2D::*)(::UnityEngine::LayerMask)>(&::UnityEngine::ContactFilter2D::SetLayerMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b9b0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "SetLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.SetDepth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContactFilter2D::*)(float_t, float_t)>(&::UnityEngine::ContactFilter2D::SetDepth)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b9b100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "SetDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.CreateLegacyFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ContactFilter2D (*)(int32_t, float_t, float_t)>(&::UnityEngine::ContactFilter2D::CreateLegacyFilter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2b99ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "CreateLegacyFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.CheckConsistency_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ContactFilter2D>)>(&::UnityEngine::ContactFilter2D::CheckConsistency_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b9b0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "CheckConsistency_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ContactFilter2D>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "useTriggers", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useLayerMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useOutsideDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useNormalAngle", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useOutsideNormalAngle", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "minDepth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minNormalAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxNormalAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ContactFilter2D::ContactFilter2D(bool useTriggers, bool useLayerMask, bool useDepth, bool useOutsideDepth, bool useNormalAngle, bool useOutsideNormalAngle, ::UnityEngine::LayerMask layerMask, float_t minDepth, float_t maxDepth, float_t minNormalAngle, float_t maxNormalAngle) noexcept : ::bs_hook::ValueTypeWrapper() {this->useTriggers = useTriggers;
this->useLayerMask = useLayerMask;
this->useDepth = useDepth;
this->useOutsideDepth = useOutsideDepth;
this->useNormalAngle = useNormalAngle;
this->useOutsideNormalAngle = useOutsideNormalAngle;
this->layerMask = layerMask;
this->minDepth = minDepth;
this->maxDepth = maxDepth;
this->minNormalAngle = minNormalAngle;
this->maxNormalAngle = maxNormalAngle;
}
constexpr void ::UnityEngine::ContactFilter2D::__set_useTriggers(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ContactFilter2D::__get_useTriggers() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_useLayerMask(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ContactFilter2D::__get_useLayerMask() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_useDepth(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ContactFilter2D::__get_useDepth() const {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_useOutsideDepth(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ContactFilter2D::__get_useOutsideDepth() const {
return ::cordl_internals::getInstanceField<bool, 0x3>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_useNormalAngle(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ContactFilter2D::__get_useNormalAngle() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_useOutsideNormalAngle(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ContactFilter2D::__get_useOutsideNormalAngle() const {
return ::cordl_internals::getInstanceField<bool, 0x5>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_layerMask(::UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x8>(this->__instance, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask ::UnityEngine::ContactFilter2D::__get_layerMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_minDepth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::ContactFilter2D::__get_minDepth() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_maxDepth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::ContactFilter2D::__get_maxDepth() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_minNormalAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::ContactFilter2D::__get_minNormalAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void ::UnityEngine::ContactFilter2D::__set_maxNormalAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::ContactFilter2D::__get_maxNormalAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
 void ::UnityEngine::ContactFilter2D::CheckConsistency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "CheckConsistency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::UnityEngine::ContactFilter2D::SetLayerMask(::UnityEngine::LayerMask layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "SetLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layerMask);
}
 void ::UnityEngine::ContactFilter2D::SetDepth(float_t minDepth, float_t maxDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "SetDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, minDepth, maxDepth);
}
 ::UnityEngine::ContactFilter2D ::UnityEngine::ContactFilter2D::CreateLegacyFilter(int32_t layerMask, float_t minDepth, float_t maxDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "CreateLegacyFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ContactFilter2D, false>(nullptr, ___internal_method, layerMask, minDepth, maxDepth);
}
 void ::UnityEngine::ContactFilter2D::CheckConsistency_Injected(ByRef<::UnityEngine::ContactFilter2D> _unity_self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(),
                            "CheckConsistency_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ContactFilter2D>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self);
}
} // end anonymous namespace
