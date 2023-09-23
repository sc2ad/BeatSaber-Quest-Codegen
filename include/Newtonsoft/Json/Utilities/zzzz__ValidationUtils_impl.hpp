#pragma once
#include "Newtonsoft/Json/Utilities/zzzz__ValidationUtils_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Utilities::ValidationUtils.ArgumentNotNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::StringW)>(&Newtonsoft::Json::Utilities::ValidationUtils::ArgumentNotNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24dd7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ValidationUtils>::get(),
                            "ArgumentNotNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Utilities::ValidationUtils::ArgumentNotNull(::bs_hook::Il2CppWrapperType value, ::StringW parameterName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ValidationUtils>::get(),
                            "ArgumentNotNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, parameterName);
}
