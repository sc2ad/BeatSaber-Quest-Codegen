// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameServerPlayerTableCell
#include "GlobalNamespace/GameServerPlayerTableCell.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass29_0*, "", "GameServerPlayerTableCell/<>c__DisplayClass29_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GameServerPlayerTableCell/<>c__DisplayClass29_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameServerPlayerTableCell::$$c__DisplayClass29_0 : public ::Il2CppObject {
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
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifiersList
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifiersList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*
    constexpr operator ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*() const noexcept {
      return modifiersList;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifiersList
    ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*& dyn_modifiersList();
    // System.Void <SetData>b__0(System.Int32 id, GameplayModifierInfoListItem listItem)
    // Offset: 0x13E0148
    void $SetData$b__0(int id, ::GlobalNamespace::GameplayModifierInfoListItem* listItem);
    // public System.Void .ctor()
    // Offset: 0x13DFC18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerPlayerTableCell::$$c__DisplayClass29_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass29_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerPlayerTableCell::$$c__DisplayClass29_0*, creationType>()));
    }
  }; // GameServerPlayerTableCell/<>c__DisplayClass29_0
  #pragma pack(pop)
  static check_size<sizeof(GameServerPlayerTableCell::$$c__DisplayClass29_0), 16 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*)> __GlobalNamespace_GameServerPlayerTableCell_$$c__DisplayClass29_0SizeCheck;
  static_assert(sizeof(GameServerPlayerTableCell::$$c__DisplayClass29_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass29_0::$SetData$b__0
// Il2CppName: <SetData>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass29_0::*)(int, ::GlobalNamespace::GameplayModifierInfoListItem*)>(&GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass29_0::$SetData$b__0)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* listItem = &::il2cpp_utils::GetClassFromName("", "GameplayModifierInfoListItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass29_0*), "<SetData>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, listItem});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass29_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
