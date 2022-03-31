// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer*, "Valve.VR", "IVRChaperoneSetup/_ExportLiveToBuffer");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/Valve.VR._ExportLiveToBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 1207C60
  class IVRChaperoneSetup::_ExportLiveToBuffer : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1BB0B90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_ExportLiveToBuffer* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_ExportLiveToBuffer*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Text.StringBuilder pBuffer, ref System.UInt32 pnBufferLength)
    // Offset: 0x1BAA890
    bool Invoke(::System::Text::StringBuilder* pBuffer, ByRef<uint> pnBufferLength);
    // public System.IAsyncResult BeginInvoke(System.Text.StringBuilder pBuffer, ref System.UInt32 pnBufferLength, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1BB0BA0
    ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pBuffer, ByRef<uint> pnBufferLength, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 pnBufferLength, System.IAsyncResult result)
    // Offset: 0x1BB0C3C
    bool EndInvoke(ByRef<uint> pnBufferLength, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/Valve.VR._ExportLiveToBuffer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::*)(::System::Text::StringBuilder*, ByRef<uint>)>(&Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::Invoke)> {
  static const MethodInfo* get() {
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* pnBufferLength = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pBuffer, pnBufferLength});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::*)(::System::Text::StringBuilder*, ByRef<uint>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* pnBufferLength = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pBuffer, pnBufferLength, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::*)(ByRef<uint>, ::System::IAsyncResult*)>(&Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pnBufferLength = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_ExportLiveToBuffer*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnBufferLength, result});
  }
};
