#pragma once
#include "System/Collections/zzzz__CaseInsensitiveComparer_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
//  Writing Method size for method: System::Collections::CaseInsensitiveComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CaseInsensitiveComparer::*)()>(&System::Collections::CaseInsensitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2410094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::CaseInsensitiveComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::CaseInsensitiveComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::CaseInsensitiveComparer::*)(System::Globalization::CultureInfo)>(&System::Collections::CaseInsensitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2410110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::CaseInsensitiveComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::CaseInsensitiveComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::CaseInsensitiveComparer::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Collections::CaseInsensitiveComparer::Compare)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2410198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::CaseInsensitiveComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IComparer
constexpr  System::Collections::CaseInsensitiveComparer::operator System::Collections::IComparer() const noexcept {
return System::Collections::IComparer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::CaseInsensitiveComparer::__set__compareInfo(System::Globalization::CompareInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::CompareInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::CompareInfo>(value));
}
constexpr System::Globalization::CompareInfo System::Collections::CaseInsensitiveComparer::__get__compareInfo() const {
return ::cordl_internals::getInstanceField<System::Globalization::CompareInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Collections::CaseInsensitiveComparer::CaseInsensitiveComparer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CaseInsensitiveComparer>())) {}
 void System::Collections::CaseInsensitiveComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::CaseInsensitiveComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "culture", ty: "System::Globalization::CultureInfo", modifiers: "", def_value: None }]
 System::Collections::CaseInsensitiveComparer::CaseInsensitiveComparer(System::Globalization::CultureInfo culture)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CaseInsensitiveComparer>(culture))) {}
 void System::Collections::CaseInsensitiveComparer::_ctor(System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::CaseInsensitiveComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, culture);
}
 int32_t System::Collections::CaseInsensitiveComparer::Compare(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::CaseInsensitiveComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
