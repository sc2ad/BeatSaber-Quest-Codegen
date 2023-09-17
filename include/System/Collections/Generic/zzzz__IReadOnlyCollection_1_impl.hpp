#pragma once
namespace {
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::IReadOnlyCollection_1.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::IReadOnlyCollection_1::*)()>(&::System::Collections::Generic::IReadOnlyCollection_1::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Collections::Generic::IReadOnlyCollection_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IReadOnlyCollection_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr  ::System::Collections::Generic::IReadOnlyCollection_1::operator ::System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::System::Collections::Generic::IReadOnlyCollection_1::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::System::Collections::Generic::IReadOnlyCollection_1::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IReadOnlyCollection_1>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
