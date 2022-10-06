// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteSpawnInfoNetSerializable
  class NoteSpawnInfoNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteDataFromNoteSpawnInfoNetSerializable
  class NoteDataFromNoteSpawnInfoNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable*, "", "NoteDataFromNoteSpawnInfoNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: NoteDataFromNoteSpawnInfoNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteDataFromNoteSpawnInfoNetSerializable : public ::GlobalNamespace::NoteData {
    public:
    // public System.Void .ctor(NoteSpawnInfoNetSerializable noteSpawnInfo)
    // Offset: 0x1507D88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDataFromNoteSpawnInfoNetSerializable* New_ctor(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDataFromNoteSpawnInfoNetSerializable*, creationType>(noteSpawnInfo)));
    }
  }; // NoteDataFromNoteSpawnInfoNetSerializable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
