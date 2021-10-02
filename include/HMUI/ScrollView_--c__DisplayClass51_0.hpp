// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ScrollView
#include "HMUI/ScrollView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScrollView/HMUI.<>c__DisplayClass51_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ScrollView::$$c__DisplayClass51_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Single threshold
    // Size: 0x4
    // Offset: 0x10
    float threshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return threshold;
    }
    // Get instance field reference: public System.Single threshold
    float& dyn_threshold();
    // System.Boolean <PageDownButtonPressed>b__0(System.Single pos)
    // Offset: 0x1418030
    bool $PageDownButtonPressed$b__0(float pos);
    // public System.Void .ctor()
    // Offset: 0x14176E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollView::$$c__DisplayClass51_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScrollView::$$c__DisplayClass51_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollView::$$c__DisplayClass51_0*, creationType>()));
    }
  }; // HMUI.ScrollView/HMUI.<>c__DisplayClass51_0
  #pragma pack(pop)
  static check_size<sizeof(ScrollView::$$c__DisplayClass51_0), 16 + sizeof(float)> __HMUI_ScrollView_$$c__DisplayClass51_0SizeCheck;
  static_assert(sizeof(ScrollView::$$c__DisplayClass51_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollView::$$c__DisplayClass51_0*, "HMUI", "ScrollView/<>c__DisplayClass51_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ScrollView::$$c__DisplayClass51_0::$PageDownButtonPressed$b__0
// Il2CppName: <PageDownButtonPressed>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ScrollView::$$c__DisplayClass51_0::*)(float)>(&HMUI::ScrollView::$$c__DisplayClass51_0::$PageDownButtonPressed$b__0)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollView::$$c__DisplayClass51_0*), "<PageDownButtonPressed>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollView::$$c__DisplayClass51_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
