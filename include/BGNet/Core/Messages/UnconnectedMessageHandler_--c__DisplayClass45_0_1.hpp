// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass45_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass45_0`1");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass45_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class UnconnectedMessageHandler::$$c__DisplayClass45_0_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`2<System.UInt32,T> obtain
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_2<uint, T>* obtain;
    // Field size check
    static_assert(sizeof(::System::Func_2<uint, T>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_2<uint, T>*
    constexpr operator ::System::Func_2<uint, T>*() const noexcept {
      return obtain;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<System.UInt32,T> obtain
    [[deprecated("Use field access instead!")]] ::System::Func_2<uint, T>*& dyn_obtain() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass45_0_1::dyn_obtain");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "obtain"))->offset;
      return *reinterpret_cast<::System::Func_2<uint, T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnconnectedMessageHandler::$$c__DisplayClass45_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass45_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnconnectedMessageHandler::$$c__DisplayClass45_0_1<T>*, creationType>()));
    }
    // T <ObtainVersioned>b__0(BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T $ObtainVersioned$b__0(::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin origin) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::$$c__DisplayClass45_0_1::<ObtainVersioned>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ObtainVersioned>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(origin)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, origin);
    }
  }; // BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass45_0`1
  // Could not write size check! Type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass45_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"