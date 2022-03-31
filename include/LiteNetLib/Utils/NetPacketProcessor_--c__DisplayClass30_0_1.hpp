// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetPacketProcessor
#include "LiteNetLib/Utils/NetPacketProcessor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass30_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass30_0`1");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.<>c__DisplayClass30_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class NetPacketProcessor::$$c__DisplayClass30_0_1 : public ::Il2CppObject {
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
    // public System.Func`1<T> packetConstructor
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<T>* packetConstructor;
    // Field size check
    static_assert(sizeof(::System::Func_1<T>*) == 0x8);
    // public System.Action`1<T> onReceive
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* onReceive;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.Func`1<T> packetConstructor
    ::System::Func_1<T>*& dyn_packetConstructor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass30_0_1::dyn_packetConstructor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "packetConstructor"))->offset;
      return *reinterpret_cast<::System::Func_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<T> onReceive
    ::System::Action_1<T>*& dyn_onReceive() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass30_0_1::dyn_onReceive");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "onReceive"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void <SubscribeNetSerializable>b__0(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $SubscribeNetSerializable$b__0(::LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass30_0_1::<SubscribeNetSerializable>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<SubscribeNetSerializable>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader), ::il2cpp_utils::ExtractType(userData)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, reader, userData);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketProcessor::$$c__DisplayClass30_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetPacketProcessor::$$c__DisplayClass30_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketProcessor::$$c__DisplayClass30_0_1<T>*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.<>c__DisplayClass30_0`1
  // Could not write size check! Type: LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.<>c__DisplayClass30_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
