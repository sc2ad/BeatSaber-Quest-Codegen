// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ChunkedInputStream
#include "System/Net/ChunkedInputStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpStreamAsyncResult
  class HttpStreamAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ChunkedInputStream::ReadBufferState);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ChunkedInputStream::ReadBufferState*, "System.Net", "ChunkedInputStream/ReadBufferState");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ChunkedInputStream/System.Net.ReadBufferState
  // [TokenAttribute] Offset: FFFFFFFF
  class ChunkedInputStream::ReadBufferState : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> Buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 Offset
    // Size: 0x4
    // Offset: 0x18
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Count
    // Size: 0x4
    // Offset: 0x1C
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InitialCount
    // Size: 0x4
    // Offset: 0x20
    int InitialCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: InitialCount and: Ares
    char __padding3[0x4] = {};
    // public System.Net.HttpStreamAsyncResult Ares
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::HttpStreamAsyncResult* Ares;
    // Field size check
    static_assert(sizeof(::System::Net::HttpStreamAsyncResult*) == 0x8);
    public:
    // Get instance field reference: public System.Byte[] Buffer
    ::ArrayW<uint8_t>& dyn_Buffer();
    // Get instance field reference: public System.Int32 Offset
    int& dyn_Offset();
    // Get instance field reference: public System.Int32 Count
    int& dyn_Count();
    // Get instance field reference: public System.Int32 InitialCount
    int& dyn_InitialCount();
    // Get instance field reference: public System.Net.HttpStreamAsyncResult Ares
    ::System::Net::HttpStreamAsyncResult*& dyn_Ares();
    // public System.Void .ctor(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Net.HttpStreamAsyncResult ares)
    // Offset: 0x1A35D2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChunkedInputStream::ReadBufferState* New_ctor(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Net::HttpStreamAsyncResult* ares) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ChunkedInputStream::ReadBufferState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChunkedInputStream::ReadBufferState*, creationType>(buffer, offset, count, ares)));
    }
  }; // System.Net.ChunkedInputStream/System.Net.ReadBufferState
  #pragma pack(pop)
  static check_size<sizeof(ChunkedInputStream::ReadBufferState), 40 + sizeof(::System::Net::HttpStreamAsyncResult*)> __System_Net_ChunkedInputStream_ReadBufferStateSizeCheck;
  static_assert(sizeof(ChunkedInputStream::ReadBufferState) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ChunkedInputStream::ReadBufferState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
