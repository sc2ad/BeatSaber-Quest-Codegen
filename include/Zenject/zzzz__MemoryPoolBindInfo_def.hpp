#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Zenject {
struct PoolExpandMethods;
}
// Forward declare root types
namespace Zenject {
class MemoryPoolBindInfo;
}
// Type: Zenject::MemoryPoolBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10893))
// CS Name: Zenject.MemoryPoolBindInfo
class CORDL_TYPE MemoryPoolBindInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MemoryPoolBindInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindInfo", modifiers: " const&", def_value: None }]
constexpr MemoryPoolBindInfo(MemoryPoolBindInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindInfo", modifiers: "&&", def_value: None }]
constexpr MemoryPoolBindInfo(MemoryPoolBindInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolBindInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryPoolBindInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolBindInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolBindInfo& operator=(MemoryPoolBindInfo&& o) noexcept = default;
  constexpr MemoryPoolBindInfo& operator=(MemoryPoolBindInfo const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__ShowExpandWarning_k__BackingField, put=__set__ShowExpandWarning_k__BackingField))  _ShowExpandWarning_k__BackingField;

constexpr void __set__ShowExpandWarning_k__BackingField(bool value) ;

constexpr bool __get__ShowExpandWarning_k__BackingField() const;

 Zenject::PoolExpandMethods __declspec(property(get=__get__ExpandMethod_k__BackingField, put=__set__ExpandMethod_k__BackingField))  _ExpandMethod_k__BackingField;

constexpr void __set__ExpandMethod_k__BackingField(Zenject::PoolExpandMethods value) ;

constexpr Zenject::PoolExpandMethods __get__ExpandMethod_k__BackingField() const;

 int32_t __declspec(property(get=__get__InitialSize_k__BackingField, put=__set__InitialSize_k__BackingField))  _InitialSize_k__BackingField;

constexpr void __set__InitialSize_k__BackingField(int32_t value) ;

constexpr int32_t __get__InitialSize_k__BackingField() const;

 int32_t __declspec(property(get=__get__MaxSize_k__BackingField, put=__set__MaxSize_k__BackingField))  _MaxSize_k__BackingField;

constexpr void __set__MaxSize_k__BackingField(int32_t value) ;

constexpr int32_t __get__MaxSize_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_ShowExpandWarning, put=set_ShowExpandWarning))  ShowExpandWarning;

 Zenject::PoolExpandMethods __declspec(property(get=get_ExpandMethod, put=set_ExpandMethod))  ExpandMethod;

 int32_t __declspec(property(get=get_InitialSize, put=set_InitialSize))  InitialSize;

 int32_t __declspec(property(get=get_MaxSize, put=set_MaxSize))  MaxSize;


// Methods

static Zenject::MemoryPoolBindInfo New_ctor() ;

/// @brief Method .ctor addr 0x2d6618c size 0x2c virtual false final false
 void _ctor() ;

/// @brief Method get_ShowExpandWarning addr 0x2d661b8 size 0x8 virtual false final false
 bool get_ShowExpandWarning() ;

/// @brief Method set_ShowExpandWarning addr 0x2d661c0 size 0xc virtual false final false
 void set_ShowExpandWarning(bool value) ;

/// @brief Method get_ExpandMethod addr 0x2d661cc size 0x8 virtual false final false
 Zenject::PoolExpandMethods get_ExpandMethod() ;

/// @brief Method set_ExpandMethod addr 0x2d661d4 size 0x8 virtual false final false
 void set_ExpandMethod(Zenject::PoolExpandMethods value) ;

/// @brief Method get_InitialSize addr 0x2d661dc size 0x8 virtual false final false
 int32_t get_InitialSize() ;

/// @brief Method set_InitialSize addr 0x2d661e4 size 0x8 virtual false final false
 void set_InitialSize(int32_t value) ;

/// @brief Method get_MaxSize addr 0x2d661ec size 0x8 virtual false final false
 int32_t get_MaxSize() ;

/// @brief Method set_MaxSize addr 0x2d661f4 size 0x8 virtual false final false
 void set_MaxSize(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::MemoryPoolBindInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::MemoryPoolBindInfo, "Zenject", "MemoryPoolBindInfo");
