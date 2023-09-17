#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_DetailProperties_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailProperties.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_DetailProperties::*)(::HoudiniEngineUnity::HEU_DetailProperties)>(&::HoudiniEngineUnity::HEU_DetailProperties::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2077d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_DetailProperties::*)()>(&::HoudiniEngineUnity::HEU_DetailProperties::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2077f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties>
constexpr  ::HoudiniEngineUnity::HEU_DetailProperties::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_DetailProperties::__set__detailDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HEU_DetailProperties::__get__detailDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_DetailProperties::__set__detailDensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HEU_DetailProperties::__get__detailDensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_DetailProperties::__set__detailResolution(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_DetailProperties::__get__detailResolution() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_DetailProperties::__set__detailResolutionPerPatch(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_DetailProperties::__get__detailResolutionPerPatch() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::HoudiniEngineUnity::HEU_DetailProperties::IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailProperties other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_DetailProperties::HEU_DetailProperties()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_DetailProperties>())) {}
 void ::HoudiniEngineUnity::HEU_DetailProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
