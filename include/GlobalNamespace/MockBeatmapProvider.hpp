// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IServerBeatmapProvider
#include "GlobalNamespace/IServerBeatmapProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapProvider
  class MockBeatmapProvider : public ::Il2CppObject/*, public GlobalNamespace::IServerBeatmapProvider*/ {
    public:
    // Creating value type constructor for type: MockBeatmapProvider
    MockBeatmapProvider() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::IServerBeatmapProvider
    operator GlobalNamespace::IServerBeatmapProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::IServerBeatmapProvider*>(this);
    }
    // public System.Boolean VerifyBeatmapForConfiguration(BeatmapIdentifierNetSerializable beatmapId, GameplayServerConfiguration configuration)
    // Offset: 0x109F10C
    bool VerifyBeatmapForConfiguration(GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayServerConfiguration configuration);
    // public BeatmapIdentifierNetSerializable SelectBeatmapFromSuggestionsConfigurationAndOwnedSongPacks(System.Int32 playerCount, System.Collections.Generic.Dictionary`2<System.String,BeatmapIdentifierNetSerializable> suggestedBeatmaps, GameplayServerConfiguration configuration, System.Collections.Generic.Dictionary`2<System.String,SongPackMask> ownedSongPacks)
    // Offset: 0x109F114
    GlobalNamespace::BeatmapIdentifierNetSerializable* SelectBeatmapFromSuggestionsConfigurationAndOwnedSongPacks(int playerCount, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*>* suggestedBeatmaps, GlobalNamespace::GameplayServerConfiguration configuration, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SongPackMask>* ownedSongPacks);
    // public System.Void Dispose()
    // Offset: 0x109F18C
    void Dispose();
    // public System.Void .ctor()
    // Offset: 0x109F190
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockBeatmapProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockBeatmapProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockBeatmapProvider*, creationType>()));
    }
  }; // MockBeatmapProvider
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapProvider*, "", "MockBeatmapProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForConfiguration
// Il2CppName: VerifyBeatmapForConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockBeatmapProvider::*)(GlobalNamespace::BeatmapIdentifierNetSerializable*, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForConfiguration)> {
  static const MethodInfo* get() {
    static auto* beatmapId = &::il2cpp_utils::GetClassFromName("", "BeatmapIdentifierNetSerializable")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapProvider*), "VerifyBeatmapForConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapId, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsConfigurationAndOwnedSongPacks
// Il2CppName: SelectBeatmapFromSuggestionsConfigurationAndOwnedSongPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapIdentifierNetSerializable* (GlobalNamespace::MockBeatmapProvider::*)(int, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*>*, GlobalNamespace::GameplayServerConfiguration, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SongPackMask>*)>(&GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsConfigurationAndOwnedSongPacks)> {
  static const MethodInfo* get() {
    static auto* playerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* suggestedBeatmaps = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "BeatmapIdentifierNetSerializable")})->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* ownedSongPacks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "SongPackMask")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapProvider*), "SelectBeatmapFromSuggestionsConfigurationAndOwnedSongPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerCount, suggestedBeatmaps, configuration, ownedSongPacks});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapProvider::*)()>(&GlobalNamespace::MockBeatmapProvider::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
