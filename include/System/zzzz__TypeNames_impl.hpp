#pragma once
namespace {
#include "System/zzzz__TypeNames_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
//  Writing Method size for method: ::System::____System__TypeNames__ATypeName.get_DisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::____System__TypeNames__ATypeName::*)()>(&::System::____System__TypeNames__ATypeName::get_DisplayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::____System__TypeNames__ATypeName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TypeNames__ATypeName.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TypeNames__ATypeName::*)(::System::TypeName)>(&::System::____System__TypeNames__ATypeName::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24982c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TypeNames__ATypeName.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::____System__TypeNames__ATypeName::*)()>(&::System::____System__TypeNames__ATypeName::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2498398;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::____System__TypeNames__ATypeName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TypeNames__ATypeName.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__TypeNames__ATypeName::*)(::bs_hook::Il2CppWrapperType)>(&::System::____System__TypeNames__ATypeName::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24983c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::____System__TypeNames__ATypeName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__TypeNames__ATypeName._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__TypeNames__ATypeName::*)()>(&::System::____System__TypeNames__ATypeName::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2498420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::TypeName
constexpr  ::System::____System__TypeNames__ATypeName::operator ::System::TypeName() const noexcept {
return ::System::TypeName(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IEquatable_1<::System::TypeName>
constexpr  ::System::____System__TypeNames__ATypeName::operator ::System::IEquatable_1<::System::TypeName>() const noexcept {
return ::System::IEquatable_1<::System::TypeName>(::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::System::____System__TypeNames__ATypeName::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                            "get_DisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::____System__TypeNames__ATypeName::Equals(::System::TypeName other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 int32_t ::System::____System__TypeNames__ATypeName::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::____System__TypeNames__ATypeName::Equals(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 ::System::____System__TypeNames__ATypeName::____System__TypeNames__ATypeName()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__TypeNames__ATypeName>())) {}
 void ::System::____System__TypeNames__ATypeName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__TypeNames__ATypeName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
