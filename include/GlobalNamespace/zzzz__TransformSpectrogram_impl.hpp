#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TransformSpectrogram_def.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformSpectrogram.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TransformSpectrogram::*)()>(&::GlobalNamespace::TransformSpectrogram::Awake)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x226c2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformSpectrogram.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TransformSpectrogram::*)()>(&::GlobalNamespace::TransformSpectrogram::Update)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x226c448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformSpectrogram._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TransformSpectrogram::*)()>(&::GlobalNamespace::TransformSpectrogram::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x226c6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::TransformSpectrogram::__set__transforms(::ArrayW<::UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform> ::GlobalNamespace::TransformSpectrogram::__get__transforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TransformSpectrogram::__set__axis(::GlobalNamespace::LightAxis value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightAxis, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LightAxis>(value));
}
constexpr ::GlobalNamespace::LightAxis ::GlobalNamespace::TransformSpectrogram::__get__axis() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightAxis, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TransformSpectrogram::__set__minPosition(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::TransformSpectrogram::__get__minPosition() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TransformSpectrogram::__set__maxPosition(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::TransformSpectrogram::__get__maxPosition() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TransformSpectrogram::__set__scaleSamples(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::TransformSpectrogram::__get__scaleSamples() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TransformSpectrogram::__set__scale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::TransformSpectrogram::__get__scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TransformSpectrogram::__set__spectrogramData(::GlobalNamespace::BasicSpectrogramData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicSpectrogramData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BasicSpectrogramData>(value));
}
constexpr ::GlobalNamespace::BasicSpectrogramData ::GlobalNamespace::TransformSpectrogram::__get__spectrogramData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicSpectrogramData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TransformSpectrogram::__set__direction(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::TransformSpectrogram::__get__direction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TransformSpectrogram::__set__defaultPositions(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::GlobalNamespace::TransformSpectrogram::__get__defaultPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::TransformSpectrogram::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::TransformSpectrogram::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::TransformSpectrogram::TransformSpectrogram()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<TransformSpectrogram>())) {}
 void ::GlobalNamespace::TransformSpectrogram::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TransformSpectrogram>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
