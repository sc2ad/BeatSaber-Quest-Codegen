#pragma once
namespace {
#include "Newtonsoft/Json/Utilities/zzzz__IWrappedCollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::IWrappedCollection.get_UnderlyingCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Newtonsoft::Json::Utilities::IWrappedCollection::*)()>(&::Newtonsoft::Json::Utilities::IWrappedCollection::get_UnderlyingCollection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Utilities::IWrappedCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::IWrappedCollection>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::IList
constexpr  ::Newtonsoft::Json::Utilities::IWrappedCollection::operator ::System::Collections::IList() const noexcept {
return ::System::Collections::IList(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::ICollection
constexpr  ::Newtonsoft::Json::Utilities::IWrappedCollection::operator ::System::Collections::ICollection() const noexcept {
return ::System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::Newtonsoft::Json::Utilities::IWrappedCollection::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 ::bs_hook::Il2CppWrapperType ::Newtonsoft::Json::Utilities::IWrappedCollection::get_UnderlyingCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::IWrappedCollection>::get(),
                            "get_UnderlyingCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
