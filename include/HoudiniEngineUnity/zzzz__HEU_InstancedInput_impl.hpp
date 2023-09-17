#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_InstancedInput_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InstancedInput.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InstancedInput::*)(::HoudiniEngineUnity::HEU_InstancedInput)>(&::HoudiniEngineUnity::HEU_InstancedInput::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1fff018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstancedInput>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstancedInput>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InstancedInput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InstancedInput::*)()>(&::HoudiniEngineUnity::HEU_InstancedInput::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1fff1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstancedInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput>
constexpr  ::HoudiniEngineUnity::HEU_InstancedInput::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_InstancedInput::__set__instancedGameObject(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::HoudiniEngineUnity::HEU_InstancedInput::__get__instancedGameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_InstancedInput::__set__rotationOffset(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::HoudiniEngineUnity::HEU_InstancedInput::__get__rotationOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_InstancedInput::__set__scaleOffset(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::HoudiniEngineUnity::HEU_InstancedInput::__get__scaleOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::HoudiniEngineUnity::HEU_InstancedInput::IsEquivalentTo(::HoudiniEngineUnity::HEU_InstancedInput other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstancedInput>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InstancedInput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_InstancedInput::HEU_InstancedInput()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_InstancedInput>())) {}
 void ::HoudiniEngineUnity::HEU_InstancedInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InstancedInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
