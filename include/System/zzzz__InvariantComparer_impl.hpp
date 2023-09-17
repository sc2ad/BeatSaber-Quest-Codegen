#pragma once
namespace {
#include "System/zzzz__InvariantComparer_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
//  Writing Method size for method: ::System::InvariantComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::InvariantComparer::*)()>(&::System::InvariantComparer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27b6748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::InvariantComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::InvariantComparer::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::System::InvariantComparer::Compare)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x27b67c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::IComparer
constexpr  ::System::InvariantComparer::operator ::System::Collections::IComparer() const noexcept {
return ::System::Collections::IComparer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::InvariantComparer::__set_m_compareInfo(::System::Globalization::CompareInfo value)  {
::cordl_internals::setInstanceField<::System::Globalization::CompareInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Globalization::CompareInfo>(value));
}
constexpr ::System::Globalization::CompareInfo ::System::InvariantComparer::__get_m_compareInfo() const {
return ::cordl_internals::getInstanceField<::System::Globalization::CompareInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::InvariantComparer::__set_Default(::System::InvariantComparer value)  {
::cordl_internals::setStaticField<::System::InvariantComparer, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer>::get>(std::forward<::System::InvariantComparer>(value));
}
 ::System::InvariantComparer ::System::InvariantComparer::__get_Default()  {
return ::cordl_internals::getStaticField<::System::InvariantComparer, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer>::get>();
}
// Ctor Parameters []
 ::System::InvariantComparer::InvariantComparer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InvariantComparer>())) {}
 void ::System::InvariantComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::InvariantComparer::Compare(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::InvariantComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
} // end anonymous namespace
