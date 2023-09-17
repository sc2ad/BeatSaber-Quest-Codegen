#pragma once
namespace {
#include "Newtonsoft/Json/Utilities/zzzz__IWrappedDictionary_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::IWrappedDictionary.get_UnderlyingDictionary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Newtonsoft::Json::Utilities::IWrappedDictionary::*)()>(&::Newtonsoft::Json::Utilities::IWrappedDictionary::get_UnderlyingDictionary)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Utilities::IWrappedDictionary),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::IWrappedDictionary>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::IDictionary
constexpr  ::Newtonsoft::Json::Utilities::IWrappedDictionary::operator ::System::Collections::IDictionary() const noexcept {
return ::System::Collections::IDictionary(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::ICollection
constexpr  ::Newtonsoft::Json::Utilities::IWrappedDictionary::operator ::System::Collections::ICollection() const noexcept {
return ::System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::Newtonsoft::Json::Utilities::IWrappedDictionary::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 ::bs_hook::Il2CppWrapperType ::Newtonsoft::Json::Utilities::IWrappedDictionary::get_UnderlyingDictionary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::IWrappedDictionary>::get(),
                            "get_UnderlyingDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
