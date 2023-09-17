#pragma once
#include "System/zzzz__TypeNames_impl.hpp"
namespace {
#include "System/zzzz__TypeIdentifiers_def.hpp"
#include "System/zzzz__TypeIdentifier_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
//  Writing Method size for method: ::System::____System__TypeIdentifiers__Display._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TypeIdentifiers__Display::*)(::StringW)>(&::System::____System__TypeIdentifiers__Display::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2498478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeIdentifiers__Display>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TypeIdentifiers__Display.get_DisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::____System__TypeIdentifiers__Display::*)()>(&::System::____System__TypeIdentifiers__Display::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2498480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::____System__TypeIdentifiers__Display),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeIdentifiers__Display>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TypeIdentifiers__Display.get_InternalName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::____System__TypeIdentifiers__Display::*)()>(&::System::____System__TypeIdentifiers__Display::get_InternalName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2498488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeIdentifiers__Display>::get(),
                            "get_InternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TypeIdentifiers__Display.GetInternalName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::____System__TypeIdentifiers__Display::*)()>(&::System::____System__TypeIdentifiers__Display::GetInternalName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24984b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeIdentifiers__Display>::get(),
                            "GetInternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::TypeIdentifier
constexpr  ::System::____System__TypeIdentifiers__Display::operator ::System::TypeIdentifier() const noexcept {
return ::System::TypeIdentifier(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::TypeName
constexpr  ::System::____System__TypeIdentifiers__Display::operator ::System::TypeName() const noexcept {
return ::System::TypeName(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IEquatable_1<::System::TypeName>
constexpr  ::System::____System__TypeIdentifiers__Display::operator ::System::IEquatable_1<::System::TypeName>() const noexcept {
return ::System::IEquatable_1<::System::TypeName>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TypeIdentifiers__Display::__set_displayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::____System__TypeIdentifiers__Display::__get_displayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__TypeIdentifiers__Display::__set_internal_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::____System__TypeIdentifiers__Display::__get_internal_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::____System__TypeIdentifiers__Display::____System__TypeIdentifiers__Display(::StringW displayName)  : ::System::____System__TypeNames__ATypeName(THROW_UNLESS(::il2cpp_utils::New<____System__TypeIdentifiers__Display>(displayName))) {}
 void ::System::____System__TypeIdentifiers__Display::_ctor(::StringW displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeIdentifiers__Display>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, displayName);
}
 ::StringW ::System::____System__TypeIdentifiers__Display::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeIdentifiers__Display>::get(),
                            "get_DisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::____System__TypeIdentifiers__Display::get_InternalName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeIdentifiers__Display>::get(),
                            "get_InternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::____System__TypeIdentifiers__Display::GetInternalName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeIdentifiers__Display>::get(),
                            "GetInternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::TypeIdentifiers.FromDisplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeIdentifier (*)(::StringW)>(&::System::TypeIdentifiers::FromDisplay)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2498424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers>::get(),
                            "FromDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 ::System::TypeIdentifier ::System::TypeIdentifiers::FromDisplay(::StringW displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers>::get(),
                            "FromDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TypeIdentifier, false>(nullptr, ___internal_method, displayName);
}
} // end anonymous namespace
