#pragma once
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Utilities::IO::Pem::PemReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::IO::Pem::PemReader::*)(System::IO::TextReader)>(&Org::BouncyCastle::Utilities::IO::Pem::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10453f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Utilities::IO::Pem::PemReader.get_Reader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::TextReader (Org::BouncyCastle::Utilities::IO::Pem::PemReader::*)()>(&Org::BouncyCastle::Utilities::IO::Pem::PemReader::get_Reader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1045470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemReader>::get(),
                            "get_Reader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Utilities::IO::Pem::PemReader.ReadPemObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IO::Pem::PemObject (Org::BouncyCastle::Utilities::IO::Pem::PemReader::*)()>(&Org::BouncyCastle::Utilities::IO::Pem::PemReader::ReadPemObject)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1045478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemReader>::get(),
                            "ReadPemObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Utilities::IO::Pem::PemReader.LoadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IO::Pem::PemObject (Org::BouncyCastle::Utilities::IO::Pem::PemReader::*)(::StringW)>(&Org::BouncyCastle::Utilities::IO::Pem::PemReader::LoadObject)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x10455cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemReader>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Utilities::IO::Pem::PemReader::__set_reader(System::IO::TextReader value)  {
::cordl_internals::setInstanceField<System::IO::TextReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::TextReader>(value));
}
constexpr System::IO::TextReader Org::BouncyCastle::Utilities::IO::Pem::PemReader::__get_reader() const {
return ::cordl_internals::getInstanceField<System::IO::TextReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "reader", ty: "System::IO::TextReader", modifiers: "", def_value: None }]
 Org::BouncyCastle::Utilities::IO::Pem::PemReader::PemReader(System::IO::TextReader reader)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PemReader>(reader))) {}
 void Org::BouncyCastle::Utilities::IO::Pem::PemReader::_ctor(System::IO::TextReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 System::IO::TextReader Org::BouncyCastle::Utilities::IO::Pem::PemReader::get_Reader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemReader>::get(),
                            "get_Reader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::TextReader, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Utilities::IO::Pem::PemObject Org::BouncyCastle::Utilities::IO::Pem::PemReader::ReadPemObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemReader>::get(),
                            "ReadPemObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::IO::Pem::PemObject, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Utilities::IO::Pem::PemObject Org::BouncyCastle::Utilities::IO::Pem::PemReader::LoadObject(::StringW type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::IO::Pem::PemReader>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::IO::Pem::PemObject, false>(const_cast<void*>(instance), ___internal_method, type);
}
