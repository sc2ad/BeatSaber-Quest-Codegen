#pragma once
namespace {
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
//  Writing Method size for method: ::System::Collections::IStructuralComparable.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::IStructuralComparable::*)(::bs_hook::Il2CppWrapperType, ::System::Collections::IComparer)>(&::System::Collections::IStructuralComparable::CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::IStructuralComparable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::IStructuralComparable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 int32_t ::System::Collections::IStructuralComparable::CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::IStructuralComparable>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IComparer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other, comparer);
}
} // end anonymous namespace
