#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_TreePrototypeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TreePrototypeInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_TreePrototypeInfo::*)(::HoudiniEngineUnity::HEU_TreePrototypeInfo)>(&::HoudiniEngineUnity::HEU_TreePrototypeInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2077c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TreePrototypeInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TreePrototypeInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TreePrototypeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_TreePrototypeInfo::*)()>(&::HoudiniEngineUnity::HEU_TreePrototypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2077d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TreePrototypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo>
constexpr  ::HoudiniEngineUnity::HEU_TreePrototypeInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_TreePrototypeInfo::__set__prefabPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_TreePrototypeInfo::__get__prefabPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_TreePrototypeInfo::__set__bendfactor(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HEU_TreePrototypeInfo::__get__bendfactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::HoudiniEngineUnity::HEU_TreePrototypeInfo::IsEquivalentTo(::HoudiniEngineUnity::HEU_TreePrototypeInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TreePrototypeInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TreePrototypeInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_TreePrototypeInfo::HEU_TreePrototypeInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_TreePrototypeInfo>())) {}
 void ::HoudiniEngineUnity::HEU_TreePrototypeInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TreePrototypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
