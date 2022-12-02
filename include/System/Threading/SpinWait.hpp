// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: SpinWait
  struct SpinWait;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SpinWait, "System.Threading", "SpinWait");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.SpinWait
  // [TokenAttribute] Offset: FFFFFFFF
  struct SpinWait/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_count
    // Size: 0x4
    // Offset: 0x0
    int m_count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpinWait
    constexpr SpinWait(int m_count_ = {}) noexcept : m_count{m_count_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_count;
    }
    // Get instance field reference: private System.Int32 m_count
    [[deprecated("Use field access instead!")]] int& dyn_m_count();
    // public System.Boolean get_NextSpinWillYield()
    // Offset: 0x1DCE320
    bool get_NextSpinWillYield();
    // public System.Void SpinOnce()
    // Offset: 0x1DCE244
    void SpinOnce();
    // public System.Void Reset()
    // Offset: 0x1DD0814
    void Reset();
  }; // System.Threading.SpinWait
  #pragma pack(pop)
  static check_size<sizeof(SpinWait), 0 + sizeof(int)> __System_Threading_SpinWaitSizeCheck;
  static_assert(sizeof(SpinWait) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::SpinWait::get_NextSpinWillYield
// Il2CppName: get_NextSpinWillYield
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::SpinWait::*)()>(&System::Threading::SpinWait::get_NextSpinWillYield)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinWait), "get_NextSpinWillYield", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinWait::SpinOnce
// Il2CppName: SpinOnce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SpinWait::*)()>(&System::Threading::SpinWait::SpinOnce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinWait), "SpinOnce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SpinWait::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SpinWait::*)()>(&System::Threading::SpinWait::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SpinWait), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
