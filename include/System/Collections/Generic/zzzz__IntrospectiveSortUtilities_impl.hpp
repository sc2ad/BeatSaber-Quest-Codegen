#pragma once
#include "System/Collections/Generic/zzzz__IntrospectiveSortUtilities_def.hpp"
//  Writing Method size for method: System::Collections::Generic::IntrospectiveSortUtilities.FloorLog2PlusOne
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2PlusOne)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x241df94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::IntrospectiveSortUtilities>::get(),
                            "FloorLog2PlusOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Generic::IntrospectiveSortUtilities.ThrowOrIgnoreBadComparer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x241dfc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::IntrospectiveSortUtilities>::get(),
                            "ThrowOrIgnoreBadComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 int32_t System::Collections::Generic::IntrospectiveSortUtilities::FloorLog2PlusOne(int32_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::IntrospectiveSortUtilities>::get(),
                            "FloorLog2PlusOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, n);
}
 void System::Collections::Generic::IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer(::bs_hook::Il2CppWrapperType comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::IntrospectiveSortUtilities>::get(),
                            "ThrowOrIgnoreBadComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, comparer);
}
