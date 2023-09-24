#pragma once
#include "System/IO/zzzz__StreamReader_impl.hpp"
#include "System/IO/zzzz__CStreamReader_def.hpp"
#include "System/zzzz__TermInfoDriver_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: System::IO::CStreamReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::CStreamReader::*)(System::IO::Stream, System::Text::Encoding)>(&System::IO::CStreamReader::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23d47d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::CStreamReader.Peek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::CStreamReader::*)()>(&System::IO::CStreamReader::Peek)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23d48e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::CStreamReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::CStreamReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::CStreamReader::*)()>(&System::IO::CStreamReader::Read)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23d496c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::CStreamReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::CStreamReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::CStreamReader::*)(ByRef<::ArrayW<char16_t>>, int32_t, int32_t)>(&System::IO::CStreamReader::Read)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23d4a3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::CStreamReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::CStreamReader.ReadLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::CStreamReader::*)()>(&System::IO::CStreamReader::ReadLine)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23d4bec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::CStreamReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::CStreamReader.ReadToEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::CStreamReader::*)()>(&System::IO::CStreamReader::ReadToEnd)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23d4c84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::CStreamReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
constexpr void System::IO::CStreamReader::__set_driver(System::TermInfoDriver value)  {
::cordl_internals::setInstanceField<System::TermInfoDriver, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::TermInfoDriver>(value));
}
constexpr System::TermInfoDriver System::IO::CStreamReader::__get_driver() const {
return ::cordl_internals::getInstanceField<System::TermInfoDriver, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::IO::CStreamReader System::IO::CStreamReader::New_ctor(System::IO::Stream stream, System::Text::Encoding encoding)  {
System::IO::CStreamReader o{THROW_UNLESS(::il2cpp_utils::New<System::IO::CStreamReader>(stream, encoding))};
return o;
}
 void System::IO::CStreamReader::_ctor(System::IO::Stream stream, System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, encoding);
}
 int32_t System::IO::CStreamReader::Peek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                            "Peek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::IO::CStreamReader::Read()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::IO::CStreamReader::Read(ByRef<::ArrayW<char16_t>> dest, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<char16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, dest, index, count);
}
 ::StringW System::IO::CStreamReader::ReadLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::IO::CStreamReader::ReadToEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::CStreamReader>::get(),
                            "ReadToEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
