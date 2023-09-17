#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Buffers/zzzz__MemoryHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/Buffers/zzzz__IPinnable_def.hpp"
//  Writing Method size for method: ::System::Buffers::MemoryHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::MemoryHandle::*)(void*, ::System::Runtime::InteropServices::GCHandle, ::System::Buffers::IPinnable)>(&::System::Buffers::MemoryHandle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x241e76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::IPinnable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::MemoryHandle.get_Pointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::System::Buffers::MemoryHandle::*)()>(&::System::Buffers::MemoryHandle::get_Pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x241e778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(),
                            "get_Pointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::MemoryHandle.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::MemoryHandle::*)()>(&::System::Buffers::MemoryHandle::Dispose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x241e780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Buffers::MemoryHandle::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_pointer", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pinnable", ty: "::System::Buffers::IPinnable", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Buffers::MemoryHandle::MemoryHandle(void* _pointer, ::System::Runtime::InteropServices::GCHandle _handle, ::System::Buffers::IPinnable _pinnable) noexcept : ::bs_hook::ValueTypeWrapper() {this->_pointer = _pointer;
this->_handle = _handle;
this->_pinnable = _pinnable;
}
constexpr void ::System::Buffers::MemoryHandle::__set__pointer(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::System::Buffers::MemoryHandle::__get__pointer() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void ::System::Buffers::MemoryHandle::__set__handle(::System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle ::System::Buffers::MemoryHandle::__get__handle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance);
}
constexpr void ::System::Buffers::MemoryHandle::__set__pinnable(::System::Buffers::IPinnable value)  {
::cordl_internals::setInstanceField<::System::Buffers::IPinnable, 0x10>(this->__instance, std::forward<::System::Buffers::IPinnable>(value));
}
constexpr ::System::Buffers::IPinnable ::System::Buffers::MemoryHandle::__get__pinnable() const {
return ::cordl_internals::getInstanceField<::System::Buffers::IPinnable, 0x10>(this->__instance);
}
/// @param handle: ::System::Runtime::InteropServices::GCHandle (default: {})
/// @param pinnable: ::System::Buffers::IPinnable (default: csnull)
 void ::System::Buffers::MemoryHandle::_ctor(void* pointer, ::System::Runtime::InteropServices::GCHandle handle, ::System::Buffers::IPinnable pinnable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::IPinnable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, pointer, handle, pinnable);
}
 void* ::System::Buffers::MemoryHandle::get_Pointer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(),
                            "get_Pointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Buffers::MemoryHandle::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryHandle>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
