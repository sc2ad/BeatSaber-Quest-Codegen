#pragma once
namespace {
#include "System/zzzz__ArraySpec_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::ArraySpec._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ArraySpec::*)(int32_t, bool)>(&::System::ArraySpec::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24984bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.Resolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::ArraySpec::*)(::System::Type)>(&::System::ArraySpec::Resolve)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24984cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder (::System::ArraySpec::*)(::System::Text::StringBuilder)>(&::System::ArraySpec::Append)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2498530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ArraySpec.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ArraySpec::*)()>(&::System::ArraySpec::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24985d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ArraySpec),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::ModifierSpec
constexpr  ::System::ArraySpec::operator ::System::ModifierSpec() const noexcept {
return ::System::ModifierSpec(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ArraySpec::__set_dimensions(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::ArraySpec::__get_dimensions() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ArraySpec::__set_bound(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::ArraySpec::__get_bound() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "dimensions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bound", ty: "bool", modifiers: "", def_value: None }]
 ::System::ArraySpec::ArraySpec(int32_t dimensions, bool bound)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ArraySpec>(dimensions, bound))) {}
 void ::System::ArraySpec::_ctor(int32_t dimensions, bool bound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dimensions, bound);
}
 ::System::Type ::System::ArraySpec::Resolve(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, type);
}
 ::System::Text::StringBuilder ::System::ArraySpec::Append(::System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 ::StringW ::System::ArraySpec::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ArraySpec>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
