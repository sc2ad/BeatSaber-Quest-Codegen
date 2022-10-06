// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: HandleRef
  struct HandleRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::HandleRef, "System.Runtime.InteropServices", "HandleRef");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.InteropServices.HandleRef
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 105A854
  struct HandleRef/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Object m_wrapper
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* m_wrapper;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.IntPtr m_handle
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr m_handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: HandleRef
    constexpr HandleRef(::Il2CppObject* m_wrapper_ = {}, ::System::IntPtr m_handle_ = {}) noexcept : m_wrapper{m_wrapper_}, m_handle{m_handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Object m_wrapper
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_wrapper();
    // Get instance field reference: System.IntPtr m_handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_handle();
    // public System.IntPtr get_Handle()
    // Offset: 0x1DE1148
    ::System::IntPtr get_Handle();
    // public System.Void .ctor(System.Object wrapper, System.IntPtr handle)
    // Offset: 0x1DE1140
    // ABORTED: conflicts with another method.  HandleRef(::Il2CppObject* wrapper, ::System::IntPtr handle);
  }; // System.Runtime.InteropServices.HandleRef
  #pragma pack(pop)
  static check_size<sizeof(HandleRef), 8 + sizeof(::System::IntPtr)> __System_Runtime_InteropServices_HandleRefSizeCheck;
  static_assert(sizeof(HandleRef) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::HandleRef::get_Handle
// Il2CppName: get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (System::Runtime::InteropServices::HandleRef::*)()>(&System::Runtime::InteropServices::HandleRef::get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::HandleRef), "get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::HandleRef::HandleRef
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
