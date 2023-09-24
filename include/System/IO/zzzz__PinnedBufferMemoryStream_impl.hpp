#pragma once
#include "System/IO/zzzz__UnmanagedMemoryStream_impl.hpp"
#include "System/IO/zzzz__PinnedBufferMemoryStream_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: System::IO::PinnedBufferMemoryStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::PinnedBufferMemoryStream::*)(::ArrayW<uint8_t>)>(&System::IO::PinnedBufferMemoryStream::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2392e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::PinnedBufferMemoryStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IO::PinnedBufferMemoryStream::*)(System::Span_1<uint8_t>)>(&System::IO::PinnedBufferMemoryStream::Read)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23931a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::PinnedBufferMemoryStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::PinnedBufferMemoryStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::PinnedBufferMemoryStream::*)(System::ReadOnlySpan_1<uint8_t>)>(&System::IO::PinnedBufferMemoryStream::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23933d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::PinnedBufferMemoryStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::PinnedBufferMemoryStream.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::PinnedBufferMemoryStream::*)()>(&System::IO::PinnedBufferMemoryStream::Finalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23936d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::PinnedBufferMemoryStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::IO::PinnedBufferMemoryStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::PinnedBufferMemoryStream::*)(bool)>(&System::IO::PinnedBufferMemoryStream::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2393774;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IO::PinnedBufferMemoryStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
constexpr void System::IO::PinnedBufferMemoryStream::__set__array(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::IO::PinnedBufferMemoryStream::__get__array() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::IO::PinnedBufferMemoryStream::__set__pinningHandle(System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::GCHandle, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::GCHandle>(value));
}
constexpr System::Runtime::InteropServices::GCHandle System::IO::PinnedBufferMemoryStream::__get__pinningHandle() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::GCHandle, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::IO::PinnedBufferMemoryStream System::IO::PinnedBufferMemoryStream::New_ctor(::ArrayW<uint8_t> array)  {
System::IO::PinnedBufferMemoryStream o{THROW_UNLESS(::il2cpp_utils::New<System::IO::PinnedBufferMemoryStream>(array))};
return o;
}
 void System::IO::PinnedBufferMemoryStream::_ctor(::ArrayW<uint8_t> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array);
}
 int32_t System::IO::PinnedBufferMemoryStream::Read(System::Span_1<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 void System::IO::PinnedBufferMemoryStream::Write(System::ReadOnlySpan_1<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 void System::IO::PinnedBufferMemoryStream::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::IO::PinnedBufferMemoryStream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::PinnedBufferMemoryStream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
