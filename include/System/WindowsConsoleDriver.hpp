// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IConsoleDriver
#include "System/IConsoleDriver.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ConsoleKeyInfo
  struct ConsoleKeyInfo;
  // Forward declaring type: Handles
  struct Handles;
  // Forward declaring type: ConsoleScreenBufferInfo
  struct ConsoleScreenBufferInfo;
  // Forward declaring type: InputRecord
  struct InputRecord;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x22
  #pragma pack(push, 1)
  // Autogenerated type: System.WindowsConsoleDriver
  // [TokenAttribute] Offset: FFFFFFFF
  class WindowsConsoleDriver : public ::Il2CppObject/*, public System::IConsoleDriver*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.IntPtr inputHandle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr inputHandle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr outputHandle
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr outputHandle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Int16 defaultAttribute
    // Size: 0x2
    // Offset: 0x20
    int16_t defaultAttribute;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    public:
    // Creating interface conversion operator: operator System::IConsoleDriver
    operator System::IConsoleDriver() noexcept {
      return *reinterpret_cast<System::IConsoleDriver*>(this);
    }
    // Get instance field reference: private System.IntPtr inputHandle
    System::IntPtr& dyn_inputHandle();
    // Get instance field reference: private System.IntPtr outputHandle
    System::IntPtr& dyn_outputHandle();
    // Get instance field reference: private System.Int16 defaultAttribute
    int16_t& dyn_defaultAttribute();
    // public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0x2539450
    System::ConsoleKeyInfo ReadKey(bool intercept);
    // static private System.Boolean IsModifierKey(System.Int16 virtualKeyCode)
    // Offset: 0x25396B8
    static bool IsModifierKey(int16_t virtualKeyCode);
    // static private System.IntPtr GetStdHandle(System.Handles handle)
    // Offset: 0x2539328
    static System::IntPtr GetStdHandle(System::Handles handle);
    // static private System.Boolean GetConsoleScreenBufferInfo(System.IntPtr handle, out System.ConsoleScreenBufferInfo info)
    // Offset: 0x25393B0
    static bool GetConsoleScreenBufferInfo(System::IntPtr handle, ByRef<System::ConsoleScreenBufferInfo> info);
    // static private System.Boolean ReadConsoleInput(System.IntPtr handle, out System.InputRecord record, System.Int32 length, out System.Int32 nread)
    // Offset: 0x25395C8
    static bool ReadConsoleInput(System::IntPtr handle, ByRef<System::InputRecord> record, int length, ByRef<int> nread);
    // public System.Void .ctor()
    // Offset: 0x25392C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsConsoleDriver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WindowsConsoleDriver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsConsoleDriver*, creationType>()));
    }
  }; // System.WindowsConsoleDriver
  #pragma pack(pop)
  static check_size<sizeof(WindowsConsoleDriver), 32 + sizeof(int16_t)> __System_WindowsConsoleDriverSizeCheck;
  static_assert(sizeof(WindowsConsoleDriver) == 0x22);
}
DEFINE_IL2CPP_ARG_TYPE(System::WindowsConsoleDriver*, "System", "WindowsConsoleDriver");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::WindowsConsoleDriver::ReadKey
// Il2CppName: ReadKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ConsoleKeyInfo (System::WindowsConsoleDriver::*)(bool)>(&System::WindowsConsoleDriver::ReadKey)> {
  static const MethodInfo* get() {
    static auto* intercept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::WindowsConsoleDriver*), "ReadKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intercept});
  }
};
// Writing MetadataGetter for method: System::WindowsConsoleDriver::IsModifierKey
// Il2CppName: IsModifierKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int16_t)>(&System::WindowsConsoleDriver::IsModifierKey)> {
  static const MethodInfo* get() {
    static auto* virtualKeyCode = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::WindowsConsoleDriver*), "IsModifierKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{virtualKeyCode});
  }
};
// Writing MetadataGetter for method: System::WindowsConsoleDriver::GetStdHandle
// Il2CppName: GetStdHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::Handles)>(&System::WindowsConsoleDriver::GetStdHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Handles")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::WindowsConsoleDriver*), "GetStdHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::WindowsConsoleDriver::GetConsoleScreenBufferInfo
// Il2CppName: GetConsoleScreenBufferInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::IntPtr, ByRef<System::ConsoleScreenBufferInfo>)>(&System::WindowsConsoleDriver::GetConsoleScreenBufferInfo)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System", "ConsoleScreenBufferInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::WindowsConsoleDriver*), "GetConsoleScreenBufferInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, info});
  }
};
// Writing MetadataGetter for method: System::WindowsConsoleDriver::ReadConsoleInput
// Il2CppName: ReadConsoleInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::IntPtr, ByRef<System::InputRecord>, int, ByRef<int>)>(&System::WindowsConsoleDriver::ReadConsoleInput)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "InputRecord")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nread = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::WindowsConsoleDriver*), "ReadConsoleInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, record, length, nread});
  }
};
// Writing MetadataGetter for method: System::WindowsConsoleDriver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
