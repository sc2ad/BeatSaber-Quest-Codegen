#pragma once
#include "System/zzzz__PointerSpec_def.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::PointerSpec._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::PointerSpec::*)(int32_t)>(&System::PointerSpec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2498644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::PointerSpec>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::PointerSpec.Resolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::PointerSpec::*)(System::Type)>(&System::PointerSpec::Resolve)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x249864c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::PointerSpec>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::PointerSpec.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder (System::PointerSpec::*)(System::Text::StringBuilder)>(&System::PointerSpec::Append)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24986a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::PointerSpec>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::PointerSpec.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::PointerSpec::*)()>(&System::PointerSpec::ToString)> {
  constexpr static std::size_t size = 0x1074;
  constexpr static std::size_t addrs = 0x24986c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::PointerSpec),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::PointerSpec>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ModifierSpec
constexpr  System::PointerSpec::operator System::ModifierSpec() const noexcept {
return System::ModifierSpec(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::PointerSpec::__set_pointer_level(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::PointerSpec::__get_pointer_level() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "pointer_level", ty: "int32_t", modifiers: "", def_value: None }]
 System::PointerSpec::PointerSpec(int32_t pointer_level)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PointerSpec>(pointer_level))) {}
 void System::PointerSpec::_ctor(int32_t pointer_level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::PointerSpec>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pointer_level);
}
 System::Type System::PointerSpec::Resolve(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::PointerSpec>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, type);
}
 System::Text::StringBuilder System::PointerSpec::Append(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::PointerSpec>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::StringBuilder, false>(const_cast<void*>(instance), ___internal_method, sb);
}
 ::StringW System::PointerSpec::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::PointerSpec>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
