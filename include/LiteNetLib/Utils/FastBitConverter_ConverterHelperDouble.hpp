// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.FastBitConverter
#include "LiteNetLib/Utils/FastBitConverter.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: LiteNetLib.Utils.FastBitConverter/LiteNetLib.Utils.ConverterHelperDouble
  // [TokenAttribute] Offset: FFFFFFFF
  struct FastBitConverter::ConverterHelperDouble/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.UInt64 Along
    // Size: 0x8
    // Offset: 0x0
    uint64_t Along;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Double Adouble
    // Size: 0x8
    // Offset: 0x0
    double Adouble;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: ConverterHelperDouble
    constexpr ConverterHelperDouble(uint64_t Along_ = {}, double Adouble_ = {}) noexcept : Along{Along_}, Adouble{Adouble_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 Along
    uint64_t& dyn_Along();
    // Get instance field reference: public System.Double Adouble
    double& dyn_Adouble();
  }; // LiteNetLib.Utils.FastBitConverter/LiteNetLib.Utils.ConverterHelperDouble
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::FastBitConverter::ConverterHelperDouble, "LiteNetLib.Utils", "FastBitConverter/ConverterHelperDouble");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
