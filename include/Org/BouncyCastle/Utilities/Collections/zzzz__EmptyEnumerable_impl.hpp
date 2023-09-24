#pragma once
#include "Org/BouncyCastle/Utilities/Collections/zzzz__EmptyEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::*)()>(&Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10cb844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Collections::EmptyEnumerable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Utilities::Collections::EmptyEnumerable.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::*)()>(&Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10cb84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Collections::EmptyEnumerable>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::__set_Instance(System::Collections::IEnumerable value)  {
::cordl_internals::setStaticField<System::Collections::IEnumerable, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Collections::EmptyEnumerable>::get>(std::forward<System::Collections::IEnumerable>(value));
}
 System::Collections::IEnumerable Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::__get_Instance()  {
return ::cordl_internals::getStaticField<System::Collections::IEnumerable, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Collections::EmptyEnumerable>::get>();
}
 Org::BouncyCastle::Utilities::Collections::EmptyEnumerable Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::New_ctor()  {
Org::BouncyCastle::Utilities::Collections::EmptyEnumerable o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Utilities::Collections::EmptyEnumerable>())};
return o;
}
 void Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Collections::EmptyEnumerable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator Org::BouncyCastle::Utilities::Collections::EmptyEnumerable::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Collections::EmptyEnumerable>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
