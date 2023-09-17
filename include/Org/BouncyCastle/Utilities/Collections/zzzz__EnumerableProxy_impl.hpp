#pragma once
namespace {
#include "Org/BouncyCastle/Utilities/Collections/zzzz__EnumerableProxy_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::*)(::System::Collections::IEnumerable)>(&::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10cb9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::*)()>(&::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x10cba48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::__set_inner(::System::Collections::IEnumerable value)  {
::cordl_internals::setInstanceField<::System::Collections::IEnumerable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IEnumerable>(value));
}
constexpr ::System::Collections::IEnumerable ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::__get_inner() const {
return ::cordl_internals::getInstanceField<::System::Collections::IEnumerable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "inner", ty: "::System::Collections::IEnumerable", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::EnumerableProxy(::System::Collections::IEnumerable inner)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnumerableProxy>(inner))) {}
 void ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::_ctor(::System::Collections::IEnumerable inner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inner);
}
 ::System::Collections::IEnumerator ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
