#pragma once
namespace {
#include "Newtonsoft/Json/Utilities/zzzz__JsonTokenUtils_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JsonTokenUtils.IsEndToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Utilities::JsonTokenUtils::IsEndToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24de2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils>::get(),
                            "IsEndToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JsonTokenUtils.IsStartToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Utilities::JsonTokenUtils::IsStartToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24de0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils>::get(),
                            "IsStartToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JsonTokenUtils.IsPrimitiveToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Utilities::JsonTokenUtils::IsPrimitiveToken)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24e1d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils>::get(),
                            "IsPrimitiveToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::Newtonsoft::Json::Utilities::JsonTokenUtils::IsEndToken(::Newtonsoft::Json::JsonToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils>::get(),
                            "IsEndToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
 bool ::Newtonsoft::Json::Utilities::JsonTokenUtils::IsStartToken(::Newtonsoft::Json::JsonToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils>::get(),
                            "IsStartToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
 bool ::Newtonsoft::Json::Utilities::JsonTokenUtils::IsPrimitiveToken(::Newtonsoft::Json::JsonToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils>::get(),
                            "IsPrimitiveToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
} // end anonymous namespace
