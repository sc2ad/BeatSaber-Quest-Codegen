#pragma once
namespace {
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::System::Linq::IGrouping_2.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TKey (::System::Linq::IGrouping_2::*)()>(&::System::Linq::IGrouping_2::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::IGrouping_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::IGrouping_2>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TElement>
constexpr  ::System::Linq::IGrouping_2::operator ::System::Collections::Generic::IEnumerable_1<TElement>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<TElement>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::System::Linq::IGrouping_2::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 TKey ::System::Linq::IGrouping_2::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::IGrouping_2>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
