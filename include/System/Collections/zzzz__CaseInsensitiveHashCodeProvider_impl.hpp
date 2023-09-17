#pragma once
namespace {
#include "System/Collections/zzzz__CaseInsensitiveHashCodeProvider_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Collections/zzzz__IHashCodeProvider_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
//  Writing Method size for method: ::System::Collections::CaseInsensitiveHashCodeProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::CaseInsensitiveHashCodeProvider::*)()>(&::System::Collections::CaseInsensitiveHashCodeProvider::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2410284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveHashCodeProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::CaseInsensitiveHashCodeProvider::*)(::System::Globalization::CultureInfo)>(&::System::Collections::CaseInsensitiveHashCodeProvider::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2410300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveHashCodeProvider.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::CaseInsensitiveHashCodeProvider::*)(::bs_hook::Il2CppWrapperType)>(&::System::Collections::CaseInsensitiveHashCodeProvider::GetHashCode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2410388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::IHashCodeProvider
constexpr  ::System::Collections::CaseInsensitiveHashCodeProvider::operator ::System::Collections::IHashCodeProvider() const noexcept {
return ::System::Collections::IHashCodeProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Collections::CaseInsensitiveHashCodeProvider::__set__compareInfo(::System::Globalization::CompareInfo value)  {
::cordl_internals::setInstanceField<::System::Globalization::CompareInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Globalization::CompareInfo>(value));
}
constexpr ::System::Globalization::CompareInfo ::System::Collections::CaseInsensitiveHashCodeProvider::__get__compareInfo() const {
return ::cordl_internals::getInstanceField<::System::Globalization::CompareInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Collections::CaseInsensitiveHashCodeProvider::CaseInsensitiveHashCodeProvider()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CaseInsensitiveHashCodeProvider>())) {}
 void ::System::Collections::CaseInsensitiveHashCodeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "culture", ty: "::System::Globalization::CultureInfo", modifiers: "", def_value: None }]
 ::System::Collections::CaseInsensitiveHashCodeProvider::CaseInsensitiveHashCodeProvider(::System::Globalization::CultureInfo culture)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CaseInsensitiveHashCodeProvider>(culture))) {}
 void ::System::Collections::CaseInsensitiveHashCodeProvider::_ctor(::System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, culture);
}
 int32_t ::System::Collections::CaseInsensitiveHashCodeProvider::GetHashCode(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
} // end anonymous namespace
