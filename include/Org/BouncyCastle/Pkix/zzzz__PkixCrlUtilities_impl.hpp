#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__PkixCrlUtilities_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CrlStoreSelector_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCrlUtilities.FindCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixCrlUtilities::*)(Org::BouncyCastle::X509::Store::X509CrlStoreSelector, Org::BouncyCastle::Pkix::PkixParameters, System::DateTime)>(&Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x1078ed4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixCrlUtilities),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCrlUtilities>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCrlUtilities.FindCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixCrlUtilities::*)(Org::BouncyCastle::X509::Store::X509CrlStoreSelector, Org::BouncyCastle::Pkix::PkixParameters)>(&Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1079bb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixCrlUtilities),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCrlUtilities>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCrlUtilities.FindCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (Org::BouncyCastle::Pkix::PkixCrlUtilities::*)(Org::BouncyCastle::X509::Store::X509CrlStoreSelector, System::Collections::IList)>(&Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x1079638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCrlUtilities>::get(),
                            "FindCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509CrlStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCrlUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixCrlUtilities::*)()>(&Org::BouncyCastle::Pkix::PkixCrlUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1078ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCrlUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls(Org::BouncyCastle::X509::Store::X509CrlStoreSelector crlselect, Org::BouncyCastle::Pkix::PkixParameters paramsPkix, System::DateTime currentDate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCrlUtilities>::get(),
                            "FindCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509CrlStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, crlselect, paramsPkix, currentDate);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls(Org::BouncyCastle::X509::Store::X509CrlStoreSelector crlselect, Org::BouncyCastle::Pkix::PkixParameters paramsPkix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCrlUtilities>::get(),
                            "FindCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509CrlStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method, crlselect, paramsPkix);
}
 System::Collections::ICollection Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls(Org::BouncyCastle::X509::Store::X509CrlStoreSelector crlSelect, System::Collections::IList crlStores)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCrlUtilities>::get(),
                            "FindCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::X509CrlStoreSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method, crlSelect, crlStores);
}
 Org::BouncyCastle::Pkix::PkixCrlUtilities Org::BouncyCastle::Pkix::PkixCrlUtilities::New_ctor()  {
Org::BouncyCastle::Pkix::PkixCrlUtilities o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Pkix::PkixCrlUtilities>())};
return o;
}
 void Org::BouncyCastle::Pkix::PkixCrlUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCrlUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
