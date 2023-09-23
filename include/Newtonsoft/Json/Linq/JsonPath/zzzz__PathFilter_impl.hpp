#pragma once
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Linq::JsonPath::PathFilter.ExecuteFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> (Newtonsoft::Json::Linq::JsonPath::PathFilter::*)(System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>, bool)>(&Newtonsoft::Json::Linq::JsonPath::PathFilter::ExecuteFilter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Linq::JsonPath::PathFilter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JsonPath::PathFilter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Linq::JsonPath::PathFilter.GetTokenIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Linq::JToken (*)(Newtonsoft::Json::Linq::JToken, bool, int32_t)>(&Newtonsoft::Json::Linq::JsonPath::PathFilter::GetTokenIndex)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2533c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JsonPath::PathFilter>::get(),
                            "GetTokenIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Linq::JsonPath::PathFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JsonPath::PathFilter::*)()>(&Newtonsoft::Json::Linq::JsonPath::PathFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25335ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JsonPath::PathFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> Newtonsoft::Json::Linq::JsonPath::PathFilter::ExecuteFilter(System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken> current, bool errorWhenNoMatch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JsonPath::PathFilter>::get(),
                            "ExecuteFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<Newtonsoft::Json::Linq::JToken>, false>(const_cast<void*>(instance), ___internal_method, current, errorWhenNoMatch);
}
 Newtonsoft::Json::Linq::JToken Newtonsoft::Json::Linq::JsonPath::PathFilter::GetTokenIndex(Newtonsoft::Json::Linq::JToken t, bool errorWhenNoMatch, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JsonPath::PathFilter>::get(),
                            "GetTokenIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Linq::JToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Linq::JToken, false>(nullptr, ___internal_method, t, errorWhenNoMatch, index);
}
// Ctor Parameters []
 Newtonsoft::Json::Linq::JsonPath::PathFilter::PathFilter()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PathFilter>())) {}
 void Newtonsoft::Json::Linq::JsonPath::PathFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Linq::JsonPath::PathFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
