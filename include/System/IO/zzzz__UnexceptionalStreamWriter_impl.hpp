#pragma once
#include "System/IO/zzzz__StreamWriter_impl.hpp"
namespace {
#include "System/IO/zzzz__UnexceptionalStreamWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::System::IO::Stream, ::System::Text::Encoding)>(&::System::IO::UnexceptionalStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23d44c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)()>(&::System::IO::UnexceptionalStreamWriter::Flush)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23d453c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IO::UnexceptionalStreamWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23d45c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IO::UnexceptionalStreamWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(char16_t)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23d4644;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IO::UnexceptionalStreamWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::ArrayW<char16_t>)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23d46c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IO::UnexceptionalStreamWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::StringW)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23d474c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IO::UnexceptionalStreamWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }]
 ::System::IO::UnexceptionalStreamWriter::UnexceptionalStreamWriter(::System::IO::Stream stream, ::System::Text::Encoding encoding)  : ::System::IO::StreamWriter(THROW_UNLESS(::il2cpp_utils::New<UnexceptionalStreamWriter>(stream, encoding))) {}
 void ::System::IO::UnexceptionalStreamWriter::_ctor(::System::IO::Stream stream, ::System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, encoding);
}
 void ::System::IO::UnexceptionalStreamWriter::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::IO::UnexceptionalStreamWriter::Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void ::System::IO::UnexceptionalStreamWriter::Write(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::IO::UnexceptionalStreamWriter::Write(::ArrayW<char16_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::IO::UnexceptionalStreamWriter::Write(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnexceptionalStreamWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
