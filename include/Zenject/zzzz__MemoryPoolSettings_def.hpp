#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct PoolExpandMethods;
}
// Forward declare root types
namespace Zenject {
class MemoryPoolSettings;
}
// Type: Zenject::MemoryPoolSettings
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10990))
// CS Name: Zenject.MemoryPoolSettings
class CORDL_TYPE MemoryPoolSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MemoryPoolSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolSettings", modifiers: " const&", def_value: None }]
constexpr MemoryPoolSettings(MemoryPoolSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolSettings", modifiers: "&&", def_value: None }]
constexpr MemoryPoolSettings(MemoryPoolSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryPoolSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolSettings& operator=(MemoryPoolSettings&& o) noexcept = default;
  constexpr MemoryPoolSettings& operator=(MemoryPoolSettings const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_InitialSize, put=__set_InitialSize))  InitialSize;

constexpr void __set_InitialSize(int32_t value) ;

constexpr int32_t __get_InitialSize() const;

 int32_t __declspec(property(get=__get_MaxSize, put=__set_MaxSize))  MaxSize;

constexpr void __set_MaxSize(int32_t value) ;

constexpr int32_t __get_MaxSize() const;

 Zenject::PoolExpandMethods __declspec(property(get=__get_ExpandMethod, put=__set_ExpandMethod))  ExpandMethod;

constexpr void __set_ExpandMethod(Zenject::PoolExpandMethods value) ;

constexpr Zenject::PoolExpandMethods __get_ExpandMethod() const;

 bool __declspec(property(get=__get_ShowExpandWarning, put=__set_ShowExpandWarning))  ShowExpandWarning;

constexpr void __set_ShowExpandWarning(bool value) ;

constexpr bool __get_ShowExpandWarning() const;

static Zenject::MemoryPoolSettings __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(Zenject::MemoryPoolSettings value) ;

static Zenject::MemoryPoolSettings __get_Default() ;


// Methods

// Ctor Parameters []
explicit MemoryPoolSettings() ;

/// @brief Method .ctor addr 0x2d6f298 size 0x30 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "expandMethod", ty: "Zenject::PoolExpandMethods", modifiers: "", def_value: None }, CppParam { name: "showExpandWarning", ty: "bool", modifiers: "", def_value: None }]
explicit MemoryPoolSettings(int32_t initialSize, int32_t maxSize, Zenject::PoolExpandMethods expandMethod, bool showExpandWarning) ;

/// @brief Method .ctor addr 0x2d6f2c8 size 0x44 virtual false final false
 void _ctor(int32_t initialSize, int32_t maxSize, Zenject::PoolExpandMethods expandMethod, bool showExpandWarning) ;

/// @brief Method __zenCreate addr 0x2d6f388 size 0x74 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6f3fc size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::MemoryPoolSettings);
DEFINE_IL2CPP_ARG_TYPE(Zenject::MemoryPoolSettings, "Zenject", "MemoryPoolSettings");
