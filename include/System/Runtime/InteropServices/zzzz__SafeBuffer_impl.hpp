#pragma once
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
namespace {
#include "System/Runtime/InteropServices/zzzz__SafeBuffer_def.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::SafeBuffer.AcquirePointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::SafeBuffer::*)(ByRef<void*>)>(&::System::Runtime::InteropServices::SafeBuffer::AcquirePointer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x236a5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer>::get(),
                            "AcquirePointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::SafeBuffer.ReleasePointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::SafeBuffer::*)()>(&::System::Runtime::InteropServices::SafeBuffer::ReleasePointer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x236a81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer>::get(),
                            "ReleasePointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::SafeBuffer.NotInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::InvalidOperationException (*)()>(&::System::Runtime::InteropServices::SafeBuffer::NotInitialized)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x236a6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer>::get(),
                            "NotInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::Runtime::InteropServices::SafeBuffer::__set_Uninitialized(::cordl_internals::uintptr_t value)  {
::cordl_internals::setStaticField<::cordl_internals::uintptr_t, "Uninitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer>::get>(std::forward<::cordl_internals::uintptr_t>(value));
}
 ::cordl_internals::uintptr_t ::System::Runtime::InteropServices::SafeBuffer::__get_Uninitialized()  {
return ::cordl_internals::getStaticField<::cordl_internals::uintptr_t, "Uninitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer>::get>();
}
constexpr void ::System::Runtime::InteropServices::SafeBuffer::__set__numBytes(::cordl_internals::uintptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::uintptr_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::uintptr_t>(value));
}
constexpr ::cordl_internals::uintptr_t ::System::Runtime::InteropServices::SafeBuffer::__get__numBytes() const {
return ::cordl_internals::getInstanceField<::cordl_internals::uintptr_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Runtime::InteropServices::SafeBuffer::AcquirePointer(ByRef<void*> pointer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer>::get(),
                            "AcquirePointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pointer);
}
 void ::System::Runtime::InteropServices::SafeBuffer::ReleasePointer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer>::get(),
                            "ReleasePointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::InvalidOperationException ::System::Runtime::InteropServices::SafeBuffer::NotInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::SafeBuffer>::get(),
                            "NotInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::InvalidOperationException, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
