#pragma once
#include "Newtonsoft/Json/Linq/zzzz__JTokenEqualityComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Linq::JTokenEqualityComparer.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JTokenEqualityComparer::*)(Newtonsoft::Json::Linq::JToken, Newtonsoft::Json::Linq::JToken)>(&Newtonsoft::Json::Linq::JTokenEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25193d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JTokenEqualityComparer>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Linq::JTokenEqualityComparer.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Newtonsoft::Json::Linq::JTokenEqualityComparer::*)(Newtonsoft::Json::Linq::JToken)>(&Newtonsoft::Json::Linq::JTokenEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2519498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JTokenEqualityComparer>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Linq::JTokenEqualityComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JTokenEqualityComparer::*)()>(&Newtonsoft::Json::Linq::JTokenEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25194bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JTokenEqualityComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<Newtonsoft::Json::Linq::JToken>
constexpr  Newtonsoft::Json::Linq::JTokenEqualityComparer::operator System::Collections::Generic::IEqualityComparer_1<Newtonsoft::Json::Linq::JToken>() const noexcept {
return System::Collections::Generic::IEqualityComparer_1<Newtonsoft::Json::Linq::JToken>(::bs_hook::Il2CppWrapperType::instance);
}
 bool Newtonsoft::Json::Linq::JTokenEqualityComparer::Equals(Newtonsoft::Json::Linq::JToken x, Newtonsoft::Json::Linq::JToken y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JTokenEqualityComparer>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
 int32_t Newtonsoft::Json::Linq::JTokenEqualityComparer::GetHashCode(Newtonsoft::Json::Linq::JToken obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JTokenEqualityComparer>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 Newtonsoft::Json::Linq::JTokenEqualityComparer Newtonsoft::Json::Linq::JTokenEqualityComparer::New_ctor()  {
Newtonsoft::Json::Linq::JTokenEqualityComparer o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Linq::JTokenEqualityComparer>())};
return o;
}
 void Newtonsoft::Json::Linq::JTokenEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JTokenEqualityComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
