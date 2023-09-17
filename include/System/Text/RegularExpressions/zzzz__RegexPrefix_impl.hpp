#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Text/RegularExpressions/zzzz__RegexPrefix_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexPrefix._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexPrefix::*)(::StringW, bool)>(&::System::Text::RegularExpressions::RegexPrefix::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27cbf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexPrefix.get_CaseInsensitive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexPrefix::*)()>(&::System::Text::RegularExpressions::RegexPrefix::get_CaseInsensitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27d602c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get(),
                            "get_CaseInsensitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexPrefix.get_Empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexPrefix (*)()>(&::System::Text::RegularExpressions::RegexPrefix::get_Empty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27d6034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get(),
                            "get_Empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexPrefix.get_Prefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::RegularExpressions::RegexPrefix::*)()>(&::System::Text::RegularExpressions::RegexPrefix::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27d608c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get(),
                            "get_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_CaseInsensitive_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Prefix_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Text::RegularExpressions::RegexPrefix::RegexPrefix(bool _CaseInsensitive_k__BackingField, ::StringW _Prefix_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_CaseInsensitive_k__BackingField = _CaseInsensitive_k__BackingField;
this->_Prefix_k__BackingField = _Prefix_k__BackingField;
}
constexpr void ::System::Text::RegularExpressions::RegexPrefix::__set__CaseInsensitive_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Text::RegularExpressions::RegexPrefix::__get__CaseInsensitive_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
 void ::System::Text::RegularExpressions::RegexPrefix::__set__Empty_k__BackingField(::System::Text::RegularExpressions::RegexPrefix value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::RegexPrefix, "<Empty>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get>(std::forward<::System::Text::RegularExpressions::RegexPrefix>(value));
}
 ::System::Text::RegularExpressions::RegexPrefix ::System::Text::RegularExpressions::RegexPrefix::__get__Empty_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::RegexPrefix, "<Empty>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get>();
}
constexpr void ::System::Text::RegularExpressions::RegexPrefix::__set__Prefix_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Text::RegularExpressions::RegexPrefix::__get__Prefix_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
 void ::System::Text::RegularExpressions::RegexPrefix::_ctor(::StringW prefix, bool ci)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, prefix, ci);
}
 bool ::System::Text::RegularExpressions::RegexPrefix::get_CaseInsensitive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get(),
                            "get_CaseInsensitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Text::RegularExpressions::RegexPrefix ::System::Text::RegularExpressions::RegexPrefix::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get(),
                            "get_Empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexPrefix, false>(nullptr, ___internal_method);
}
 ::StringW ::System::Text::RegularExpressions::RegexPrefix::get_Prefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexPrefix>::get(),
                            "get_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
